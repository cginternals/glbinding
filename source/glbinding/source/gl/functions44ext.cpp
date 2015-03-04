#include <glbinding/gl/functions44ext.h>

#include <glbinding/Binding.h>


namespace gl44ext
{

void glAccumxOES(GLenum op, GLfixed value)
{
    return glbinding::Binding::AccumxOES(op, value);
}

void glActiveProgramEXT(GLuint program)
{
    return glbinding::Binding::ActiveProgramEXT(program);
}

void glActiveStencilFaceEXT(GLenum face)
{
    return glbinding::Binding::ActiveStencilFaceEXT(face);
}

void glActiveTextureARB(GLenum texture)
{
    return glbinding::Binding::ActiveTextureARB(texture);
}

void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return glbinding::Binding::ActiveVaryingNV(program, name);
}

void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::Binding::AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::Binding::AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::Binding::AlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return glbinding::Binding::AlphaFuncxOES(func, ref);
}

void glApplyTextureEXT(GLenum mode)
{
    return glbinding::Binding::ApplyTextureEXT(mode);
}

GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return glbinding::Binding::AreProgramsResidentNV(n, programs, residences);
}

GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::Binding::AreTexturesResidentEXT(n, textures, residences);
}

void glArrayElementEXT(GLint i)
{
    return glbinding::Binding::ArrayElementEXT(i);
}

void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::Binding::ArrayObjectATI(array, size, type, stride, buffer, offset);
}

void glAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::Binding::AsyncMarkerSGIX(marker);
}

void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return glbinding::Binding::AttachObjectARB(containerObj, obj);
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

void glBeginQueryARB(GLenum target, GLuint id)
{
    return glbinding::Binding::BeginQueryARB(target, id);
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

void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return glbinding::Binding::BindAttribLocationARB(programObj, index, name);
}

void glBindBufferARB(GLenum target, GLuint buffer)
{
    return glbinding::Binding::BindBufferARB(target, buffer);
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

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRangeEXT(target, index, buffer, offset, size);
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRangeNV(target, index, buffer, offset, size);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocationEXT(program, color, name);
}

void glBindFragmentShaderATI(GLuint id)
{
    return glbinding::Binding::BindFragmentShaderATI(id);
}

void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return glbinding::Binding::BindFramebufferEXT(target, framebuffer);
}

void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return glbinding::Binding::BindImageTextureEXT(index, texture, level, layered, layer, access, format);
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

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::BindRenderbufferEXT(target, renderbuffer);
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return glbinding::Binding::BindTexGenParameterEXT(unit, coord, value);
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
    return glbinding::Binding::BindTextureEXT(target, texture);
}

void glBindTextureUnit(GLuint unit, GLuint texture)
{
    return glbinding::Binding::BindTextureUnit(unit, texture);
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return glbinding::Binding::BindTextureUnitParameterEXT(unit, value);
}

void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return glbinding::Binding::BindTransformFeedbackNV(target, id);
}

void glBindVertexArrayAPPLE(GLuint array)
{
    return glbinding::Binding::BindVertexArrayAPPLE(array);
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

void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::BlendColorEXT(red, green, blue, alpha);
}

void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::BlendColorxOES(red, green, blue, alpha);
}

void glBlendEquationEXT(GLenum mode)
{
    return glbinding::Binding::BlendEquationEXT(mode);
}

void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationIndexedAMD(buf, mode);
}

void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationiARB(buf, mode);
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFuncIndexedAMD(buf, src, dst);
}

void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFunciARB(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glbinding::Binding::BlendParameteriNV(pname, value);
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

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return glbinding::Binding::BufferDataARB(target, size, data, usage);
}

void glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return glbinding::Binding::BufferPageCommitmentARB(target, offset, size, commit);
}

void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::BufferParameteriAPPLE(target, pname, param);
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return glbinding::Binding::BufferSubDataARB(target, offset, size, data);
}

GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::CheckFramebufferStatusEXT(target));
}

GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::CheckNamedFramebufferStatus(framebuffer, target));
}

GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::CheckNamedFramebufferStatusEXT(framebuffer, target));
}

void glClampColorARB(GLenum target, GLenum clamp)
{
    return glbinding::Binding::ClampColorARB(target, clamp);
}

void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::ClearAccumxOES(red, green, blue, alpha);
}

void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::Binding::ClearColorIiEXT(red, green, blue, alpha);
}

void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::Binding::ClearColorIuiEXT(red, green, blue, alpha);
}

void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::ClearColorxOES(red, green, blue, alpha);
}

void glClearDepthdNV(GLdouble depth)
{
    return glbinding::Binding::ClearDepthdNV(depth);
}

void glClearDepthfOES(GLclampf depth)
{
    return glbinding::Binding::ClearDepthfOES(depth);
}

void glClearDepthxOES(GLfixed depth)
{
    return glbinding::Binding::ClearDepthxOES(depth);
}

void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferData(buffer, internalformat, format, type, data);
}

void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearNamedFramebufferfi(framebuffer, buffer, depth, stencil);
}

void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

void glClientActiveTextureARB(GLenum texture)
{
    return glbinding::Binding::ClientActiveTextureARB(texture);
}

void glClientActiveVertexStreamATI(GLenum stream)
{
    return glbinding::Binding::ClientActiveVertexStreamATI(stream);
}

void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::Binding::ClientAttribDefaultEXT(mask);
}

void glClipControl(GLenum origin, GLenum depth)
{
    return glbinding::Binding::ClipControl(origin, depth);
}

void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return glbinding::Binding::ClipPlanefOES(plane, equation);
}

void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return glbinding::Binding::ClipPlanexOES(plane, equation);
}

void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Color3fVertex3fSUN(r, g, b, x, y, z);
}

void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return glbinding::Binding::Color3fVertex3fvSUN(c, v);
}

void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::Binding::Color3hNV(red, green, blue);
}

void glColor3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Color3hvNV(v);
}

void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return glbinding::Binding::Color3xOES(red, green, blue);
}

void glColor3xvOES(const GLfixed * components)
{
    return glbinding::Binding::Color3xvOES(components);
}

void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Color4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::Color4fNormal3fVertex3fvSUN(c, n, v);
}

void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return glbinding::Binding::Color4hNV(red, green, blue, alpha);
}

void glColor4hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Color4hvNV(v);
}

void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return glbinding::Binding::Color4ubVertex2fSUN(r, g, b, a, x, y);
}

void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::Color4ubVertex2fvSUN(c, v);
}

void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Color4ubVertex3fSUN(r, g, b, a, x, y, z);
}

void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::Color4ubVertex3fvSUN(c, v);
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::Color4xOES(red, green, blue, alpha);
}

void glColor4xvOES(const GLfixed * components)
{
    return glbinding::Binding::Color4xvOES(components);
}

void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::ColorFormatNV(size, type, stride);
}

void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::Binding::ColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::Binding::ColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::Binding::ColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::Binding::ColorMaskIndexedEXT(index, r, g, b, a);
}

void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::ColorPointerEXT(size, type, stride, count, pointer);
}

void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::ColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::Binding::ColorPointervINTEL(size, type, pointer);
}

void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ColorSubTable(target, start, count, format, type, data);
}

void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ColorSubTableEXT(target, start, count, format, type, data);
}

void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::Binding::ColorTable(target, internalformat, width, format, type, table);
}

void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::Binding::ColorTableEXT(target, internalFormat, width, format, type, table);
}

void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ColorTableParameterfv(target, pname, params);
}

void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ColorTableParameterfvSGI(target, pname, params);
}

void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ColorTableParameteriv(target, pname, params);
}

void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ColorTableParameterivSGI(target, pname, params);
}

void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::Binding::ColorTableSGI(target, internalformat, width, format, type, table);
}

void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::Binding::CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return glbinding::Binding::CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return glbinding::Binding::CombinerParameterfNV(pname, param);
}

void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::CombinerParameterfvNV(pname, params);
}

void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return glbinding::Binding::CombinerParameteriNV(pname, param);
}

void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::Binding::CombinerParameterivNV(pname, params);
}

void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::CombinerStageParameterfvNV(stage, pname, params);
}

void glCompileShaderARB(GLhandleARB shaderObj)
{
    return glbinding::Binding::CompileShaderARB(shaderObj);
}

void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return glbinding::Binding::CompileShaderIncludeARB(shader, count, path, length);
}

void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter1D(target, internalformat, width, format, type, image);
}

void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::Binding::ConvolutionParameterf(target, pname, params);
}

void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::Binding::ConvolutionParameterfEXT(target, pname, params);
}

void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ConvolutionParameterfv(target, pname, params);
}

void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ConvolutionParameterfvEXT(target, pname, params);
}

void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return glbinding::Binding::ConvolutionParameteri(target, pname, params);
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return glbinding::Binding::ConvolutionParameteriEXT(target, pname, params);
}

void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ConvolutionParameteriv(target, pname, params);
}

void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ConvolutionParameterivEXT(target, pname, params);
}

void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::Binding::ConvolutionParameterxOES(target, pname, param);
}

void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::ConvolutionParameterxvOES(target, pname, params);
}

void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorSubTable(target, start, x, y, width);
}

void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorSubTableEXT(target, start, x, y, width);
}

void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorTable(target, internalformat, x, y, width);
}

void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorTableSGI(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::CopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glbinding::Binding::CopyPathNV(resultPath, srcPath);
}

void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glbinding::Binding::CoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glbinding::Binding::CoverStrokePathNV(path, coverMode);
}

void glCoverageModulationNV(GLenum components)
{
    return glbinding::Binding::CoverageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return glbinding::Binding::CoverageModulationTableNV(n, v);
}

void glCreateBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::CreateBuffers(n, buffers);
}

void glCreateFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::CreateFramebuffers(n, framebuffers);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glbinding::Binding::CreatePerfQueryINTEL(queryId, queryHandle);
}

GLhandleARB glCreateProgramObjectARB()
{
    return glbinding::Binding::CreateProgramObjectARB();
}

void glCreateProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::CreateProgramPipelines(n, pipelines);
}

void glCreateQueries(GLenum target, GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateQueries(target, n, ids);
}

void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::CreateRenderbuffers(n, renderbuffers);
}

void glCreateSamplers(GLsizei n, GLuint * samplers)
{
    return glbinding::Binding::CreateSamplers(n, samplers);
}

GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return glbinding::Binding::CreateShaderObjectARB(shaderType);
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return glbinding::Binding::CreateShaderProgramEXT(type, string);
}

GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, UnusedMask flags)
{
    return glbinding::Binding::CreateSyncFromCLeventARB(context, event, flags);
}

void glCreateTextures(GLenum target, GLsizei n, GLuint * textures)
{
    return glbinding::Binding::CreateTextures(target, n, textures);
}

void glCreateTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateTransformFeedbacks(n, ids);
}

void glCreateVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::CreateVertexArrays(n, arrays);
}

void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return glbinding::Binding::CullParameterdvEXT(pname, params);
}

void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return glbinding::Binding::CullParameterfvEXT(pname, params);
}

void glCurrentPaletteMatrixARB(GLint index)
{
    return glbinding::Binding::CurrentPaletteMatrixARB(index);
}

void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return glbinding::Binding::DebugMessageCallbackAMD(callback, userParam);
}

void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return glbinding::Binding::DebugMessageCallbackARB(callback, userParam);
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::Binding::DebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::Binding::DebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return glbinding::Binding::DebugMessageInsertAMD(category, severity, id, length, buf);
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::Binding::DebugMessageInsertARB(source, type, id, severity, length, buf);
}

void glDeformSGIX(FfdMaskSGIX mask)
{
    return glbinding::Binding::DeformSGIX(mask);
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return glbinding::Binding::DeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return glbinding::Binding::DeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return glbinding::Binding::DeleteAsyncMarkersSGIX(marker, range);
}

void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return glbinding::Binding::DeleteBuffersARB(n, buffers);
}

void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return glbinding::Binding::DeleteFencesAPPLE(n, fences);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glbinding::Binding::DeleteFencesNV(n, fences);
}

void glDeleteFragmentShaderATI(GLuint id)
{
    return glbinding::Binding::DeleteFragmentShaderATI(id);
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::Binding::DeleteFramebuffersEXT(n, framebuffers);
}

void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::Binding::DeleteNamedStringARB(namelen, name);
}

void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return glbinding::Binding::DeleteNamesAMD(identifier, num, names);
}

void glDeleteObjectARB(GLhandleARB obj)
{
    return glbinding::Binding::DeleteObjectARB(obj);
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteOcclusionQueriesNV(n, ids);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glbinding::Binding::DeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::Binding::DeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::Binding::DeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return glbinding::Binding::DeleteProgramsARB(n, programs);
}

void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::Binding::DeleteProgramsNV(n, programs);
}

void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteQueriesARB(n, ids);
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::Binding::DeleteRenderbuffersEXT(n, renderbuffers);
}

void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return glbinding::Binding::DeleteTexturesEXT(n, textures);
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteTransformFeedbacksNV(n, ids);
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return glbinding::Binding::DeleteVertexArraysAPPLE(n, arrays);
}

void glDeleteVertexShaderEXT(GLuint id)
{
    return glbinding::Binding::DeleteVertexShaderEXT(id);
}

void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return glbinding::Binding::DepthBoundsEXT(zmin, zmax);
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return glbinding::Binding::DepthBoundsdNV(zmin, zmax);
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::DepthRangedNV(zNear, zFar);
}

void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return glbinding::Binding::DepthRangefOES(n, f);
}

void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return glbinding::Binding::DepthRangexOES(n, f);
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return glbinding::Binding::DetachObjectARB(containerObj, attachedObj);
}

void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::Binding::DetailTexFuncSGIS(target, n, points);
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::Binding::DisableClientStateIndexedEXT(array, index);
}

void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::Binding::DisableClientStateiEXT(array, index);
}

void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::Binding::DisableIndexedEXT(target, index);
}

void glDisableVariantClientStateEXT(GLuint id)
{
    return glbinding::Binding::DisableVariantClientStateEXT(id);
}

void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::DisableVertexArrayAttrib(vaobj, index);
}

void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::DisableVertexArrayAttribEXT(vaobj, index);
}

void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::Binding::DisableVertexArrayEXT(vaobj, array);
}

void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::Binding::DisableVertexAttribAPPLE(index, pname);
}

void glDisableVertexAttribArrayARB(GLuint index)
{
    return glbinding::Binding::DisableVertexAttribArrayARB(index);
}

void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return glbinding::Binding::DispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::Binding::DrawArraysEXT(mode, first, count);
}

void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glbinding::Binding::DrawArraysInstancedARB(mode, first, count, primcount);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glbinding::Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::DrawBuffersARB(n, bufs);
}

void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::DrawBuffersATI(n, bufs);
}

void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::Binding::DrawElementArrayAPPLE(mode, first, count);
}

void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return glbinding::Binding::DrawElementArrayATI(mode, count);
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::Binding::DrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return glbinding::Binding::DrawMeshArraysSUN(mode, first, count, width);
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return glbinding::Binding::DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return glbinding::Binding::DrawRangeElementArrayATI(mode, start, end, count);
}

void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return glbinding::Binding::DrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return glbinding::Binding::DrawTransformFeedbackNV(mode, id);
}

void glEdgeFlagFormatNV(GLsizei stride)
{
    return glbinding::Binding::EdgeFlagFormatNV(stride);
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return glbinding::Binding::EdgeFlagPointerEXT(stride, count, pointer);
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return glbinding::Binding::EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return glbinding::Binding::ElementPointerAPPLE(type, pointer);
}

void glElementPointerATI(GLenum type, const void * pointer)
{
    return glbinding::Binding::ElementPointerATI(type, pointer);
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::Binding::EnableClientStateIndexedEXT(array, index);
}

void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::Binding::EnableClientStateiEXT(array, index);
}

void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::Binding::EnableIndexedEXT(target, index);
}

void glEnableVariantClientStateEXT(GLuint id)
{
    return glbinding::Binding::EnableVariantClientStateEXT(id);
}

void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::EnableVertexArrayAttrib(vaobj, index);
}

void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::EnableVertexArrayAttribEXT(vaobj, index);
}

void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::Binding::EnableVertexArrayEXT(vaobj, array);
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::Binding::EnableVertexAttribAPPLE(index, pname);
}

void glEnableVertexAttribArrayARB(GLuint index)
{
    return glbinding::Binding::EnableVertexAttribArrayARB(index);
}

void glEndConditionalRenderNV()
{
    return glbinding::Binding::EndConditionalRenderNV();
}

void glEndConditionalRenderNVX()
{
    return glbinding::Binding::EndConditionalRenderNVX();
}

void glEndFragmentShaderATI()
{
    return glbinding::Binding::EndFragmentShaderATI();
}

void glEndOcclusionQueryNV()
{
    return glbinding::Binding::EndOcclusionQueryNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return glbinding::Binding::EndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::Binding::EndPerfQueryINTEL(queryHandle);
}

void glEndQueryARB(GLenum target)
{
    return glbinding::Binding::EndQueryARB(target);
}

void glEndTransformFeedbackEXT()
{
    return glbinding::Binding::EndTransformFeedbackEXT();
}

void glEndTransformFeedbackNV()
{
    return glbinding::Binding::EndTransformFeedbackNV();
}

void glEndVertexShaderEXT()
{
    return glbinding::Binding::EndVertexShaderEXT();
}

void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::Binding::EndVideoCaptureNV(video_capture_slot);
}

void glEvalCoord1xOES(GLfixed u)
{
    return glbinding::Binding::EvalCoord1xOES(u);
}

void glEvalCoord1xvOES(const GLfixed * coords)
{
    return glbinding::Binding::EvalCoord1xvOES(coords);
}

void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return glbinding::Binding::EvalCoord2xOES(u, v);
}

void glEvalCoord2xvOES(const GLfixed * coords)
{
    return glbinding::Binding::EvalCoord2xvOES(coords);
}

void glEvalMapsNV(GLenum target, GLenum mode)
{
    return glbinding::Binding::EvalMapsNV(target, mode);
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return glbinding::Binding::ExecuteProgramNV(target, id, params);
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::Binding::ExtractComponentEXT(res, src, num);
}

void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return glbinding::Binding::FeedbackBufferxOES(n, type, buffer);
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::Binding::FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return glbinding::Binding::FinishAsyncSGIX(markerp);
}

void glFinishFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::FinishFenceAPPLE(fence);
}

void glFinishFenceNV(GLuint fence)
{
    return glbinding::Binding::FinishFenceNV(fence);
}

void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return glbinding::Binding::FinishObjectAPPLE(object, name);
}

void glFinishTextureSUNX()
{
    return glbinding::Binding::FinishTextureSUNX();
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::FlushMappedBufferRangeAPPLE(target, offset, size);
}

void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::FlushMappedNamedBufferRange(buffer, offset, length);
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void glFlushPixelDataRangeNV(GLenum target)
{
    return glbinding::Binding::FlushPixelDataRangeNV(target);
}

void glFlushRasterSGIX()
{
    return glbinding::Binding::FlushRasterSGIX();
}

void glFlushStaticDataIBM(GLenum target)
{
    return glbinding::Binding::FlushStaticDataIBM(target);
}

void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::Binding::FlushVertexArrayRangeAPPLE(length, pointer);
}

void glFlushVertexArrayRangeNV()
{
    return glbinding::Binding::FlushVertexArrayRangeNV();
}

void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::Binding::FogCoordFormatNV(type, stride);
}

void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::FogCoordPointerEXT(type, stride, pointer);
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void glFogCoorddEXT(GLdouble coord)
{
    return glbinding::Binding::FogCoorddEXT(coord);
}

void glFogCoorddvEXT(const GLdouble * coord)
{
    return glbinding::Binding::FogCoorddvEXT(coord);
}

void glFogCoordfEXT(GLfloat coord)
{
    return glbinding::Binding::FogCoordfEXT(coord);
}

void glFogCoordfvEXT(const GLfloat * coord)
{
    return glbinding::Binding::FogCoordfvEXT(coord);
}

void glFogCoordhNV(GLhalfNV fog)
{
    return glbinding::Binding::FogCoordhNV(fog);
}

void glFogCoordhvNV(const GLhalfNV * fog)
{
    return glbinding::Binding::FogCoordhvNV(fog);
}

void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return glbinding::Binding::FogFuncSGIS(n, points);
}

void glFogxOES(GLenum pname, GLfixed param)
{
    return glbinding::Binding::FogxOES(pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::Binding::FogxvOES(pname, param);
}

void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return glbinding::Binding::FragmentColorMaterialSGIX(face, mode);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return glbinding::Binding::FragmentCoverageColorNV(color);
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::Binding::FragmentLightModelfSGIX(pname, param);
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::FragmentLightModelfvSGIX(pname, params);
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return glbinding::Binding::FragmentLightModeliSGIX(pname, param);
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::Binding::FragmentLightModelivSGIX(pname, params);
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::Binding::FragmentLightfSGIX(light, pname, param);
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::FragmentLightfvSGIX(light, pname, params);
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return glbinding::Binding::FragmentLightiSGIX(light, pname, param);
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::Binding::FragmentLightivSGIX(light, pname, params);
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::Binding::FragmentMaterialfSGIX(face, pname, param);
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::FragmentMaterialfvSGIX(face, pname, params);
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return glbinding::Binding::FragmentMaterialiSGIX(face, pname, param);
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::Binding::FragmentMaterialivSGIX(face, pname, params);
}

void glFrameTerminatorGREMEDY()
{
    return glbinding::Binding::FrameTerminatorGREMEDY();
}

void glFrameZoomSGIX(GLint factor)
{
    return glbinding::Binding::FrameZoomSGIX(factor);
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::Binding::FramebufferDrawBufferEXT(framebuffer, mode);
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::Binding::FramebufferReadBufferEXT(framebuffer, mode);
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::FramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::Binding::FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTextureARB(target, attachment, texture, level);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::Binding::FramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::Binding::FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void glFreeObjectBufferATI(GLuint buffer)
{
    return glbinding::Binding::FreeObjectBufferATI(buffer);
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::Binding::FrustumfOES(l, r, b, t, n, f);
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::Binding::FrustumxOES(l, r, b, t, n, f);
}

GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return glbinding::Binding::GenAsyncMarkersSGIX(range);
}

void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::GenBuffersARB(n, buffers);
}

void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return glbinding::Binding::GenFencesAPPLE(n, fences);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glbinding::Binding::GenFencesNV(n, fences);
}

GLuint glGenFragmentShadersATI(GLuint range)
{
    return glbinding::Binding::GenFragmentShadersATI(range);
}

void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::GenFramebuffersEXT(n, framebuffers);
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return glbinding::Binding::GenNamesAMD(identifier, num, names);
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenOcclusionQueriesNV(n, ids);
}

GLuint glGenPathsNV(GLsizei range)
{
    return glbinding::Binding::GenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::Binding::GenPerfMonitorsAMD(n, monitors);
}

void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return glbinding::Binding::GenProgramsARB(n, programs);
}

void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return glbinding::Binding::GenProgramsNV(n, programs);
}

void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenQueriesARB(n, ids);
}

void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::GenRenderbuffersEXT(n, renderbuffers);
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return glbinding::Binding::GenSymbolsEXT(datatype, storagetype, range, components);
}

void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return glbinding::Binding::GenTexturesEXT(n, textures);
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenTransformFeedbacksNV(n, ids);
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::GenVertexArraysAPPLE(n, arrays);
}

GLuint glGenVertexShadersEXT(GLuint range)
{
    return glbinding::Binding::GenVertexShadersEXT(range);
}

void glGenerateMipmapEXT(GLenum target)
{
    return glbinding::Binding::GenerateMipmapEXT(target);
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return glbinding::Binding::GenerateMultiTexMipmapEXT(texunit, target);
}

void glGenerateTextureMipmap(GLuint texture)
{
    return glbinding::Binding::GenerateTextureMipmap(texture);
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return glbinding::Binding::GenerateTextureMipmapEXT(texture, target);
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::Binding::GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::Binding::GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetArrayObjectfvATI(array, pname, params);
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetArrayObjectivATI(array, pname, params);
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return glbinding::Binding::GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::Binding::GetAttribLocationARB(programObj, name);
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::Binding::GetBooleanIndexedvEXT(target, index, data);
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetBufferParameterivARB(target, pname, params);
}

void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetBufferParameterui64vNV(target, pname, params);
}

void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetBufferPointervARB(target, pname, params);
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return glbinding::Binding::GetBufferSubDataARB(target, offset, size, data);
}

void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return glbinding::Binding::GetClipPlanefOES(plane, equation);
}

void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return glbinding::Binding::GetClipPlanexOES(plane, equation);
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::Binding::GetColorTable(target, format, type, table);
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return glbinding::Binding::GetColorTableEXT(target, format, type, data);
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetColorTableParameterfv(target, pname, params);
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetColorTableParameterfvEXT(target, pname, params);
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetColorTableParameterfvSGI(target, pname, params);
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetColorTableParameteriv(target, pname, params);
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetColorTableParameterivEXT(target, pname, params);
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetColorTableParameterivSGI(target, pname, params);
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::Binding::GetColorTableSGI(target, format, type, table);
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetCombinerStageParameterfvNV(stage, pname, params);
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return glbinding::Binding::GetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return glbinding::Binding::GetCompressedTexImageARB(target, level, img);
}

void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureImage(texture, level, bufSize, pixels);
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return glbinding::Binding::GetCompressedTextureImageEXT(texture, target, lod, img);
}

void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::Binding::GetConvolutionFilter(target, format, type, image);
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::Binding::GetConvolutionFilterEXT(target, format, type, image);
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetConvolutionParameterfv(target, pname, params);
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetConvolutionParameterfvEXT(target, pname, params);
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetConvolutionParameteriv(target, pname, params);
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetConvolutionParameterivEXT(target, pname, params);
}

void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetConvolutionParameterxvOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return glbinding::Binding::GetCoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return glbinding::Binding::GetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::Binding::GetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::Binding::GetDetailTexFuncSGIS(target, points);
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::Binding::GetDoubleIndexedvEXT(target, index, data);
}

void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetDoublei_vEXT(pname, index, params);
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFenceivNV(fence, pname, params);
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFinalCombinerInputParameterivNV(variable, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glbinding::Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetFixedvOES(pname, params);
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::Binding::GetFloatIndexedvEXT(target, index, data);
}

void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetFloati_vEXT(pname, index, params);
}

void glGetFogFuncSGIS(GLfloat * points)
{
    return glbinding::Binding::GetFogFuncSGIS(points);
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataLocationEXT(program, name);
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetFragmentLightfvSGIX(light, pname, params);
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFragmentLightivSGIX(light, pname, params);
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetFragmentMaterialfvSGIX(face, pname, params);
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFragmentMaterialivSGIX(face, pname, params);
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferParameterivEXT(framebuffer, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::GetGraphicsResetStatus());
}

GLenum glGetGraphicsResetStatusARB()
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::GetGraphicsResetStatusARB());
}

GLhandleARB glGetHandleARB(GLenum pname)
{
    return glbinding::Binding::GetHandleARB(pname);
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetHistogram(target, reset, format, type, values);
}

void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetHistogramEXT(target, reset, format, type, values);
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetHistogramParameterfv(target, pname, params);
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetHistogramParameterfvEXT(target, pname, params);
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetHistogramParameteriv(target, pname, params);
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetHistogramParameterivEXT(target, pname, params);
}

void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetHistogramParameterxvOES(target, pname, params);
}

GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::Binding::GetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetImageTransformParameterfvHP(target, pname, params);
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetImageTransformParameterivHP(target, pname, params);
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return glbinding::Binding::GetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint glGetInstrumentsSGIX()
{
    return glbinding::Binding::GetInstrumentsSGIX();
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return glbinding::Binding::GetIntegerIndexedvEXT(target, index, data);
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return glbinding::Binding::GetIntegerui64i_vNV(value, index, result);
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return glbinding::Binding::GetIntegerui64vNV(value, result);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::Binding::GetInvariantBooleanvEXT(id, value, data);
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::Binding::GetInvariantFloatvEXT(id, value, data);
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::Binding::GetInvariantIntegervEXT(id, value, data);
}

void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetLightxOES(light, pname, params);
}

void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetListParameterfvSGIX(list, pname, params);
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetListParameterivSGIX(list, pname, params);
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::Binding::GetLocalConstantBooleanvEXT(id, value, data);
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::Binding::GetLocalConstantFloatvEXT(id, value, data);
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::Binding::GetLocalConstantIntegervEXT(id, value, data);
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMapAttribParameterfvNV(target, index, pname, params);
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMapAttribParameterivNV(target, index, pname, params);
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return glbinding::Binding::GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMapParameterfvNV(target, pname, params);
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMapParameterivNV(target, pname, params);
}

void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return glbinding::Binding::GetMapxvOES(target, query, v);
}

void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::Binding::GetMaterialxOES(face, pname, param);
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetMinmax(target, reset, format, type, values);
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetMinmaxEXT(target, reset, format, type, values);
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMinmaxParameterfv(target, pname, params);
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMinmaxParameterfvEXT(target, pname, params);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMinmaxParameteriv(target, pname, params);
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMinmaxParameterivEXT(target, pname, params);
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexEnvivEXT(texunit, target, pname, params);
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetMultiTexGendvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexGenivEXT(texunit, coord, pname, params);
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexParameterivEXT(texunit, target, pname, params);
}

void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::Binding::GetMultisamplefvNV(pname, index, val);
}

void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetNamedBufferParameteri64v(buffer, pname, params);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedBufferParameteriv(buffer, pname, params);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedBufferParameterivEXT(buffer, pname, params);
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetNamedBufferParameterui64vNV(buffer, pname, params);
}

void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::Binding::GetNamedBufferPointerv(buffer, pname, params);
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::Binding::GetNamedBufferPointervEXT(buffer, pname, params);
}

void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetNamedBufferSubData(buffer, offset, size, data);
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetNamedFramebufferParameteriv(framebuffer, pname, param);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return glbinding::Binding::GetNamedProgramStringEXT(program, target, pname, string);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedProgramivEXT(program, target, pname, params);
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return glbinding::Binding::GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedStringivARB(namelen, name, pname, params);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glbinding::Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetObjectBufferfvATI(buffer, pname, params);
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetObjectBufferivATI(buffer, pname, params);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetObjectParameterfvARB(obj, pname, params);
}

void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetObjectParameterivAPPLE(objectType, name, pname, params);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetObjectParameterivARB(obj, pname, params);
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetOcclusionQueryivNV(id, pname, params);
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetOcclusionQueryuivNV(id, pname, params);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return glbinding::Binding::GetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return glbinding::Binding::GetPathColorGenivNV(color, pname, value);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glbinding::Binding::GetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glbinding::Binding::GetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glbinding::Binding::GetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glbinding::Binding::GetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glbinding::Binding::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glbinding::Binding::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glbinding::Binding::GetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glbinding::Binding::GetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glbinding::Binding::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return glbinding::Binding::GetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return glbinding::Binding::GetPathTexGenivNV(texCoordSet, pname, value);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glbinding::Binding::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glbinding::Binding::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glbinding::Binding::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glbinding::Binding::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glbinding::Binding::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glbinding::Binding::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glbinding::Binding::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return glbinding::Binding::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glbinding::Binding::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glbinding::Binding::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return glbinding::Binding::GetPixelMapxv(map, size, values);
}

void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetPixelTexGenParameterfvSGIS(pname, params);
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return glbinding::Binding::GetPixelTexGenParameterivSGIS(pname, params);
}

void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetPixelTransformParameterfvEXT(target, pname, params);
}

void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetPixelTransformParameterivEXT(target, pname, params);
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return glbinding::Binding::GetPointerIndexedvEXT(target, index, data);
}

void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return glbinding::Binding::GetPointeri_vEXT(pname, index, params);
}

void glGetPointervEXT(GLenum pname, void ** params)
{
    return glbinding::Binding::GetPointervEXT(pname, params);
}

void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::Binding::GetProgramEnvParameterIivNV(target, index, params);
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::Binding::GetProgramEnvParameterIuivNV(target, index, params);
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetProgramEnvParameterdvARB(target, index, params);
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetProgramEnvParameterfvARB(target, index, params);
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::Binding::GetProgramLocalParameterIivNV(target, index, params);
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::Binding::GetProgramLocalParameterIuivNV(target, index, params);
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetProgramLocalParameterdvARB(target, index, params);
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetProgramLocalParameterfvARB(target, index, params);
}

void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return glbinding::Binding::GetProgramNamedParameterdvNV(id, len, name, params);
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return glbinding::Binding::GetProgramNamedParameterfvNV(id, len, name, params);
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetProgramParameterdvNV(target, index, pname, params);
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetProgramParameterfvNV(target, index, pname, params);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return glbinding::Binding::GetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return glbinding::Binding::GetProgramStringARB(target, pname, string);
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return glbinding::Binding::GetProgramStringNV(id, pname, program);
}

void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return glbinding::Binding::GetProgramSubroutineParameteruivNV(target, index, param);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramivARB(target, pname, params);
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramivNV(id, pname, params);
}

void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjecti64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectiv(id, buffer, pname, offset);
}

void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectui64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectuiv(id, buffer, pname, offset);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryObjectivARB(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetQueryObjectuivARB(id, pname, params);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryivARB(target, pname, params);
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetRenderbufferParameterivEXT(target, pname, params);
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::Binding::GetSeparableFilter(target, format, type, row, column, span);
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::Binding::GetSeparableFilterEXT(target, format, type, row, column, span);
}

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return glbinding::Binding::GetShaderSourceARB(obj, maxLength, length, source);
}

void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::Binding::GetSharpenTexFuncSGIS(target, points);
}

void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return glbinding::Binding::GetTexBumpParameterfvATI(pname, param);
}

void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return glbinding::Binding::GetTexBumpParameterivATI(pname, param);
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexEnvxvOES(target, pname, params);
}

void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return glbinding::Binding::GetTexFilterFuncSGIS(target, filter, weights);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexGenxvOES(coord, pname, params);
}

void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexLevelParameterxvOES(target, level, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetTexParameterPointervAPPLE(target, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexParameterxvOES(target, pname, params);
}

GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return glbinding::Binding::GetTextureHandleARB(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glbinding::Binding::GetTextureHandleNV(texture);
}

void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureImage(texture, level, format, type, bufSize, pixels);
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetTextureImageEXT(texture, target, level, format, type, pixels);
}

void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureLevelParameterfv(texture, level, pname, params);
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureLevelParameteriv(texture, level, pname, params);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterIiv(texture, pname, params);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterIivEXT(texture, target, pname, params);
}

void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTextureParameterIuiv(texture, pname, params);
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTextureParameterIuivEXT(texture, target, pname, params);
}

void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureParameterfv(texture, pname, params);
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureParameterfvEXT(texture, target, pname, params);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameteriv(texture, pname, params);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return glbinding::Binding::GetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glbinding::Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTrackMatrixivNV(target, address, pname, params);
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return glbinding::Binding::GetTransformFeedbackVaryingNV(program, index, location);
}

void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
    return glbinding::Binding::GetTransformFeedbacki64_v(xfb, pname, index, param);
}

void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbacki_v(xfb, pname, index, param);
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbackiv(xfb, pname, param);
}

GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return glbinding::Binding::GetUniformBufferSizeEXT(program, location);
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::Binding::GetUniformLocationARB(programObj, name);
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return glbinding::Binding::GetUniformOffsetEXT(program, location);
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return glbinding::Binding::GetUniformfvARB(programObj, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return glbinding::Binding::GetUniformi64vNV(program, location, params);
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return glbinding::Binding::GetUniformivARB(programObj, location, params);
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return glbinding::Binding::GetUniformui64vNV(program, location, params);
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformuivEXT(program, location, params);
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVariantArrayObjectfvATI(id, pname, params);
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVariantArrayObjectivATI(id, pname, params);
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::Binding::GetVariantBooleanvEXT(id, value, data);
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::Binding::GetVariantFloatvEXT(id, value, data);
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::Binding::GetVariantIntegervEXT(id, value, data);
}

void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return glbinding::Binding::GetVariantPointervEXT(id, value, data);
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetVaryingLocationNV(program, name);
}

void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
    return glbinding::Binding::GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIndexediv(vaobj, index, pname, param);
}

void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIntegervEXT(vaobj, pname, param);
}

void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return glbinding::Binding::GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return glbinding::Binding::GetVertexArrayPointervEXT(vaobj, pname, param);
}

void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayiv(vaobj, pname, param);
}

void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribArrayObjectfvATI(index, pname, params);
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribArrayObjectivATI(index, pname, params);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribIivEXT(index, pname, params);
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVertexAttribIuivEXT(index, pname, params);
}

void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribLdvEXT(index, pname, params);
}

void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return glbinding::Binding::GetVertexAttribLi64vNV(index, pname, params);
}

void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetVertexAttribLui64vARB(index, pname, params);
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetVertexAttribLui64vNV(index, pname, params);
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointervARB(index, pname, pointer);
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointervNV(index, pname, pointer);
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdvARB(index, pname, params);
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdvNV(index, pname, params);
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfvARB(index, pname, params);
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfvNV(index, pname, params);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribivARB(index, pname, params);
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribivNV(index, pname, params);
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVideoCaptureivNV(video_capture_slot, pname, params);
}

void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return glbinding::Binding::GetVideoi64vNV(video_slot, pname, params);
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVideoivNV(video_slot, pname, params);
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetVideoui64vNV(video_slot, pname, params);
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVideouivNV(video_slot, pname, params);
}

void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::Binding::GetnColorTable(target, format, type, bufSize, table);
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::Binding::GetnColorTableARB(target, format, type, bufSize, table);
}

void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnCompressedTexImage(target, lod, bufSize, pixels);
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return glbinding::Binding::GetnCompressedTexImageARB(target, lod, bufSize, img);
}

void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::Binding::GetnConvolutionFilter(target, format, type, bufSize, image);
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::Binding::GetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnHistogram(target, reset, format, type, bufSize, values);
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnHistogramARB(target, reset, format, type, bufSize, values);
}

void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::Binding::GetnMapdv(target, query, bufSize, v);
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::Binding::GetnMapdvARB(target, query, bufSize, v);
}

void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetnMapfv(target, query, bufSize, v);
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetnMapfvARB(target, query, bufSize, v);
}

void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::Binding::GetnMapiv(target, query, bufSize, v);
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::Binding::GetnMapivARB(target, query, bufSize, v);
}

void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnMinmax(target, reset, format, type, bufSize, values);
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::Binding::GetnPixelMapfv(map, bufSize, values);
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::Binding::GetnPixelMapfvARB(map, bufSize, values);
}

void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::Binding::GetnPixelMapuiv(map, bufSize, values);
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::Binding::GetnPixelMapuivARB(map, bufSize, values);
}

void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::Binding::GetnPixelMapusv(map, bufSize, values);
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::Binding::GetnPixelMapusvARB(map, bufSize, values);
}

void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::Binding::GetnPolygonStipple(bufSize, pattern);
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::Binding::GetnPolygonStippleARB(bufSize, pattern);
}

void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::Binding::GetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::Binding::GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnTexImage(target, level, format, type, bufSize, pixels);
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return glbinding::Binding::GetnTexImageARB(target, level, format, type, bufSize, img);
}

void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::Binding::GetnUniformdv(program, location, bufSize, params);
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::Binding::GetnUniformdvARB(program, location, bufSize, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfvARB(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformivARB(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuiv(program, location, bufSize, params);
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuivARB(program, location, bufSize, params);
}

void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return glbinding::Binding::GlobalAlphaFactorbSUN(factor);
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return glbinding::Binding::GlobalAlphaFactordSUN(factor);
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return glbinding::Binding::GlobalAlphaFactorfSUN(factor);
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
    return glbinding::Binding::GlobalAlphaFactoriSUN(factor);
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return glbinding::Binding::GlobalAlphaFactorsSUN(factor);
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return glbinding::Binding::GlobalAlphaFactorubSUN(factor);
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return glbinding::Binding::GlobalAlphaFactoruiSUN(factor);
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return glbinding::Binding::GlobalAlphaFactorusSUN(factor);
}

void glHintPGI(GLenum target, GLint mode)
{
    return glbinding::Binding::HintPGI(target, mode);
}

void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::Histogram(target, width, internalformat, sink);
}

void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::HistogramEXT(target, width, internalformat, sink);
}

void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return glbinding::Binding::IglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::ImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::ImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ImageTransformParameterivHP(target, pname, params);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return glbinding::Binding::ImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::Binding::IndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return glbinding::Binding::IndexFuncEXT(func, ref);
}

void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::Binding::IndexMaterialEXT(face, mode);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::IndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::IndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexxOES(GLfixed component)
{
    return glbinding::Binding::IndexxOES(component);
}

void glIndexxvOES(const GLfixed * component)
{
    return glbinding::Binding::IndexxvOES(component);
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::Binding::InsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::Binding::InsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return glbinding::Binding::InstrumentsBufferSGIX(size, buffer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glbinding::Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::Binding::IsAsyncMarkerSGIX(marker);
}

GLboolean glIsBufferARB(GLuint buffer)
{
    return glbinding::Binding::IsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target)
{
    return glbinding::Binding::IsBufferResidentNV(target);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::Binding::IsEnabledIndexedEXT(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::IsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return glbinding::Binding::IsFenceNV(fence);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return glbinding::Binding::IsFramebufferEXT(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return glbinding::Binding::IsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glbinding::Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return glbinding::Binding::IsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return glbinding::Binding::IsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::Binding::IsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return glbinding::Binding::IsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return glbinding::Binding::IsOcclusionQueryNV(id);
}

GLboolean glIsPathNV(GLuint path)
{
    return glbinding::Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glbinding::Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glbinding::Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgramARB(GLuint program)
{
    return glbinding::Binding::IsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id)
{
    return glbinding::Binding::IsProgramNV(id);
}

GLboolean glIsQueryARB(GLuint id)
{
    return glbinding::Binding::IsQueryARB(id);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return glbinding::Binding::IsRenderbufferEXT(renderbuffer);
}

GLboolean glIsTextureEXT(GLuint texture)
{
    return glbinding::Binding::IsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::Binding::IsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return glbinding::Binding::IsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return glbinding::Binding::IsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return glbinding::Binding::IsVertexArrayAPPLE(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return glbinding::Binding::IsVertexAttribEnabledAPPLE(index, pname);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glbinding::Binding::LabelObjectEXT(type, object, length, label);
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
    return glbinding::Binding::LightEnviSGIX(pname, param);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
    return glbinding::Binding::LightModelxOES(pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::Binding::LightModelxvOES(pname, param);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return glbinding::Binding::LightxOES(light, pname, param);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::LightxvOES(light, pname, params);
}

void glLineWidthxOES(GLfixed width)
{
    return glbinding::Binding::LineWidthxOES(width);
}

void glLinkProgramARB(GLhandleARB programObj)
{
    return glbinding::Binding::LinkProgramARB(programObj);
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return glbinding::Binding::ListParameterfSGIX(list, pname, param);
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ListParameterfvSGIX(list, pname, params);
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return glbinding::Binding::ListParameteriSGIX(list, pname, param);
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ListParameterivSGIX(list, pname, params);
}

void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return glbinding::Binding::LoadIdentityDeformationMapSGIX(mask);
}

void glLoadMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::LoadMatrixxOES(m);
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return glbinding::Binding::LoadProgramNV(target, id, len, program);
}

void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::Binding::LoadTransposeMatrixdARB(m);
}

void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::Binding::LoadTransposeMatrixfARB(m);
}

void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::LoadTransposeMatrixxOES(m);
}

void glLockArraysEXT(GLint first, GLsizei count)
{
    return glbinding::Binding::LockArraysEXT(first, count);
}

void glMakeBufferNonResidentNV(GLenum target)
{
    return glbinding::Binding::MakeBufferNonResidentNV(target);
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return glbinding::Binding::MakeBufferResidentNV(target, access);
}

void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::Binding::MakeImageHandleNonResidentARB(handle);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return glbinding::Binding::MakeImageHandleResidentARB(handle, access);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glbinding::Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return glbinding::Binding::MakeNamedBufferNonResidentNV(buffer);
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MakeNamedBufferResidentNV(buffer, access);
}

void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleNonResidentARB(handle);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleResidentARB(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleResidentNV(handle);
}

void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return glbinding::Binding::Map1xOES(target, u1, u2, stride, order, points);
}

void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return glbinding::Binding::Map2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBufferARB(GLenum target, GLenum access)
{
    return glbinding::Binding::MapBufferARB(target, access);
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return glbinding::Binding::MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return glbinding::Binding::MapGrid1xOES(n, u1, u2);
}

void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return glbinding::Binding::MapGrid2xOES(n, u1, u2, v1, v2);
}

void * glMapNamedBuffer(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MapNamedBuffer(buffer, access);
}

void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MapNamedBufferEXT(buffer, access);
}

void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::Binding::MapNamedBufferRange(buffer, offset, length, access);
}

void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::Binding::MapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * glMapObjectBufferATI(GLuint buffer)
{
    return glbinding::Binding::MapObjectBufferATI(buffer);
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MapParameterfvNV(target, pname, params);
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MapParameterivNV(target, pname, params);
}

void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return glbinding::Binding::MapTexture2DINTEL(texture, level, access, stride, layout);
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::Binding::MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::Binding::MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::Binding::MapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::Binding::MapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::Binding::MaterialxOES(face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return glbinding::Binding::MaterialxvOES(face, pname, param);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::MatrixIndexPointerARB(size, type, stride, pointer);
}

void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return glbinding::Binding::MatrixIndexubvARB(size, indices);
}

void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return glbinding::Binding::MatrixIndexuivARB(size, indices);
}

void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return glbinding::Binding::MatrixIndexusvARB(size, indices);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
    return glbinding::Binding::MatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoadTransposefEXT(mode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoadfEXT(mode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMultTransposefEXT(mode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMultfEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
    return glbinding::Binding::MatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
    return glbinding::Binding::MatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::MatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::MatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::MatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::MatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::MatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::MatrixTranslatefEXT(mode, x, y, z);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrierByRegion(barriers);
}

void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrierEXT(barriers);
}

void glMinSampleShadingARB(GLfloat value)
{
    return glbinding::Binding::MinSampleShadingARB(value);
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::Minmax(target, internalformat, sink);
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::MinmaxEXT(target, internalformat, sink);
}

void glMultMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::MultMatrixxOES(m);
}

void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::Binding::MultTransposeMatrixdARB(m);
}

void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::Binding::MultTransposeMatrixfARB(m);
}

void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::MultTransposeMatrixxOES(m);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return glbinding::Binding::MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return glbinding::Binding::MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::MultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return glbinding::Binding::MultiTexCoord1bOES(texture, s);
}

void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord1bvOES(texture, coords);
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return glbinding::Binding::MultiTexCoord1dARB(target, s);
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord1dvARB(target, v);
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return glbinding::Binding::MultiTexCoord1fARB(target, s);
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord1fvARB(target, v);
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return glbinding::Binding::MultiTexCoord1hNV(target, s);
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord1hvNV(target, v);
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return glbinding::Binding::MultiTexCoord1iARB(target, s);
}

void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord1ivARB(target, v);
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return glbinding::Binding::MultiTexCoord1sARB(target, s);
}

void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord1svARB(target, v);
}

void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return glbinding::Binding::MultiTexCoord1xOES(texture, s);
}

void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord1xvOES(texture, coords);
}

void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return glbinding::Binding::MultiTexCoord2bOES(texture, s, t);
}

void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord2bvOES(texture, coords);
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::Binding::MultiTexCoord2dARB(target, s, t);
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord2dvARB(target, v);
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::Binding::MultiTexCoord2fARB(target, s, t);
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord2fvARB(target, v);
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return glbinding::Binding::MultiTexCoord2hNV(target, s, t);
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord2hvNV(target, v);
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return glbinding::Binding::MultiTexCoord2iARB(target, s, t);
}

void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord2ivARB(target, v);
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return glbinding::Binding::MultiTexCoord2sARB(target, s, t);
}

void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord2svARB(target, v);
}

void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return glbinding::Binding::MultiTexCoord2xOES(texture, s, t);
}

void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord2xvOES(texture, coords);
}

void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::Binding::MultiTexCoord3bOES(texture, s, t, r);
}

void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord3bvOES(texture, coords);
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::Binding::MultiTexCoord3dARB(target, s, t, r);
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord3dvARB(target, v);
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::Binding::MultiTexCoord3fARB(target, s, t, r);
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord3fvARB(target, v);
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::Binding::MultiTexCoord3hNV(target, s, t, r);
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord3hvNV(target, v);
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::Binding::MultiTexCoord3iARB(target, s, t, r);
}

void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord3ivARB(target, v);
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::Binding::MultiTexCoord3sARB(target, s, t, r);
}

void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord3svARB(target, v);
}

void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::Binding::MultiTexCoord3xOES(texture, s, t, r);
}

void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord3xvOES(texture, coords);
}

void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::Binding::MultiTexCoord4bOES(texture, s, t, r, q);
}

void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord4bvOES(texture, coords);
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::Binding::MultiTexCoord4dARB(target, s, t, r, q);
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord4dvARB(target, v);
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::Binding::MultiTexCoord4fARB(target, s, t, r, q);
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord4fvARB(target, v);
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::Binding::MultiTexCoord4hNV(target, s, t, r, q);
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord4hvNV(target, v);
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::Binding::MultiTexCoord4iARB(target, s, t, r, q);
}

void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord4ivARB(target, v);
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::Binding::MultiTexCoord4sARB(target, s, t, r, q);
}

void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord4svARB(target, v);
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::Binding::MultiTexCoord4xOES(texture, s, t, r, q);
}

void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord4xvOES(texture, coords);
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::MultiTexEnvfEXT(texunit, target, pname, param);
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MultiTexEnvfvEXT(texunit, target, pname, params);
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::MultiTexEnviEXT(texunit, target, pname, param);
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexEnvivEXT(texunit, target, pname, params);
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::Binding::MultiTexGendEXT(texunit, coord, pname, param);
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::Binding::MultiTexGendvEXT(texunit, coord, pname, params);
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::Binding::MultiTexGenfEXT(texunit, coord, pname, param);
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MultiTexGenfvEXT(texunit, coord, pname, params);
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return glbinding::Binding::MultiTexGeniEXT(texunit, coord, pname, param);
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexGenivEXT(texunit, coord, pname, params);
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexParameterIivEXT(texunit, target, pname, params);
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::MultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::MultiTexParameterfEXT(texunit, target, pname, param);
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MultiTexParameterfvEXT(texunit, target, pname, params);
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::MultiTexParameteriEXT(texunit, target, pname, param);
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexParameterivEXT(texunit, target, pname, params);
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glNamedBufferData(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::NamedBufferData(buffer, size, data, usage);
}

void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::NamedBufferDataEXT(buffer, size, data, usage);
}

void glNamedBufferPageCommitmentARB(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return glbinding::Binding::NamedBufferPageCommitmentARB(buffer, offset, size, commit);
}

void glNamedBufferPageCommitmentEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return glbinding::Binding::NamedBufferPageCommitmentEXT(buffer, offset, size, commit);
}

void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::NamedBufferStorage(buffer, size, data, flags);
}

void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::NamedBufferStorageEXT(buffer, size, data, flags);
}

void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::NamedBufferSubData(buffer, offset, size, data);
}

void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::NamedBufferSubDataEXT(buffer, offset, size, data);
}

void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::NamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf)
{
    return glbinding::Binding::NamedFramebufferDrawBuffer(framebuffer, buf);
}

void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::NamedFramebufferDrawBuffers(framebuffer, n, bufs);
}

void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::Binding::NamedFramebufferParameteri(framebuffer, pname, param);
}

void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::Binding::NamedFramebufferParameteriEXT(framebuffer, pname, param);
}

void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src)
{
    return glbinding::Binding::NamedFramebufferReadBuffer(framebuffer, src);
}

void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::NamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::NamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::NamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::NamedFramebufferTexture(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::NamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::NamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::Binding::NamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::NamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::Binding::NamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::NamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
}

void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::NamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::NamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::Binding::NamedProgramLocalParameter4dvEXT(program, target, index, params);
}

void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::NamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::Binding::NamedProgramLocalParameter4fvEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::NamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return glbinding::Binding::NamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::NamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::Binding::NamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::NamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::Binding::NamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::NamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::Binding::NamedProgramStringEXT(program, target, format, len, string);
}

void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return glbinding::Binding::NamedStringARB(type, namelen, name, stringlen, string);
}

GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return glbinding::Binding::NewObjectBufferATI(size, pointer, usage);
}

void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Normal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::Normal3fVertex3fvSUN(n, v);
}

void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return glbinding::Binding::Normal3hNV(nx, ny, nz);
}

void glNormal3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Normal3hvNV(v);
}

void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return glbinding::Binding::Normal3xOES(nx, ny, nz);
}

void glNormal3xvOES(const GLfixed * coords)
{
    return glbinding::Binding::Normal3xvOES(coords);
}

void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::Binding::NormalFormatNV(type, stride);
}

void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::NormalPointerEXT(type, stride, count, pointer);
}

void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::NormalPointerListIBM(type, stride, pointer, ptrstride);
}

void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return glbinding::Binding::NormalPointervINTEL(type, pointer);
}

void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::Binding::NormalStream3bATI(stream, nx, ny, nz);
}

void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return glbinding::Binding::NormalStream3bvATI(stream, coords);
}

void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::Binding::NormalStream3dATI(stream, nx, ny, nz);
}

void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::Binding::NormalStream3dvATI(stream, coords);
}

void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::Binding::NormalStream3fATI(stream, nx, ny, nz);
}

void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::Binding::NormalStream3fvATI(stream, coords);
}

void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return glbinding::Binding::NormalStream3iATI(stream, nx, ny, nz);
}

void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::Binding::NormalStream3ivATI(stream, coords);
}

void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::Binding::NormalStream3sATI(stream, nx, ny, nz);
}

void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::Binding::NormalStream3svATI(stream, coords);
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::ObjectPurgeableAPPLE(objectType, name, option));
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::ObjectUnpurgeableAPPLE(objectType, name, option));
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::Binding::OrthofOES(l, r, b, t, n, f);
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::Binding::OrthoxOES(l, r, b, t, n, f);
}

void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PNTrianglesfATI(pname, param);
}

void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return glbinding::Binding::PNTrianglesiATI(pname, param);
}

void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return glbinding::Binding::PassTexCoordATI(dst, coord, swizzle);
}

void glPassThroughxOES(GLfixed token)
{
    return glbinding::Binding::PassThroughxOES(token);
}

void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return glbinding::Binding::PathColorGenNV(color, genMode, colorFormat, coeffs);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return glbinding::Binding::PathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glbinding::Binding::PathDashArrayNV(path, dashCount, dashArray);
}

void glPathFogGenNV(GLenum genMode)
{
    return glbinding::Binding::PathFogGenNV(genMode);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::PathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::PathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount));
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::Binding::PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::Binding::PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::PathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glbinding::Binding::PathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glbinding::Binding::PathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glbinding::Binding::PathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glbinding::Binding::PathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glbinding::Binding::PathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::PathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glbinding::Binding::PathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::Binding::PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::Binding::PathTexGenNV(texCoordSet, genMode, components, coeffs);
}

void glPauseTransformFeedbackNV()
{
    return glbinding::Binding::PauseTransformFeedbackNV();
}

void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::Binding::PixelDataRangeNV(target, length, pointer);
}

void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return glbinding::Binding::PixelMapx(map, size, values);
}

void glPixelStorex(GLenum pname, GLfixed param)
{
    return glbinding::Binding::PixelStorex(pname, param);
}

void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelTexGenParameterfSGIS(pname, param);
}

void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PixelTexGenParameterfvSGIS(pname, params);
}

void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelTexGenParameteriSGIS(pname, param);
}

void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PixelTexGenParameterivSGIS(pname, params);
}

void glPixelTexGenSGIX(GLenum mode)
{
    return glbinding::Binding::PixelTexGenSGIX(mode);
}

void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return glbinding::Binding::PixelTransferxOES(pname, param);
}

void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelTransformParameterfEXT(target, pname, param);
}

void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PixelTransformParameterfvEXT(target, pname, params);
}

void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::PixelTransformParameteriEXT(target, pname, param);
}

void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::PixelTransformParameterivEXT(target, pname, params);
}

void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return glbinding::Binding::PixelZoomxOES(xfactor, yfactor);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glbinding::Binding::PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterfARB(pname, param);
}

void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterfEXT(pname, param);
}

void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterfSGIS(pname, param);
}

void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfvARB(pname, params);
}

void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfvEXT(pname, params);
}

void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfvSGIS(pname, params);
}

void glPointParameteriNV(GLenum pname, GLint param)
{
    return glbinding::Binding::PointParameteriNV(pname, param);
}

void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PointParameterivNV(pname, params);
}

void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::PointParameterxvOES(pname, params);
}

void glPointSizexOES(GLfixed size)
{
    return glbinding::Binding::PointSizexOES(size);
}

GLint glPollAsyncSGIX(GLuint * markerp)
{
    return glbinding::Binding::PollAsyncSGIX(markerp);
}

GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return glbinding::Binding::PollInstrumentsSGIX(marker_p);
}

void glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp)
{
    return glbinding::Binding::PolygonOffsetClampEXT(factor, units, clamp);
}

void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return glbinding::Binding::PolygonOffsetEXT(factor, bias);
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return glbinding::Binding::PolygonOffsetxOES(factor, units);
}

void glPopGroupMarkerEXT()
{
    return glbinding::Binding::PopGroupMarkerEXT();
}

void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return glbinding::Binding::PresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return glbinding::Binding::PresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

void glPrimitiveRestartIndexNV(GLuint index)
{
    return glbinding::Binding::PrimitiveRestartIndexNV(index);
}

void glPrimitiveRestartNV()
{
    return glbinding::Binding::PrimitiveRestartNV();
}

void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return glbinding::Binding::PrioritizeTexturesEXT(n, textures, priorities);
}

void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return glbinding::Binding::PrioritizeTexturesxOES(n, textures, priorities);
}

void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return glbinding::Binding::ProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::ProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::Binding::ProgramEnvParameter4dvARB(target, index, params);
}

void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::Binding::ProgramEnvParameter4fvARB(target, index, params);
}

void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::ProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::Binding::ProgramEnvParameterI4ivNV(target, index, params);
}

void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::ProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::Binding::ProgramEnvParameterI4uivNV(target, index, params);
}

void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::ProgramEnvParameters4fvEXT(target, index, count, params);
}

void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::Binding::ProgramEnvParametersI4ivNV(target, index, count, params);
}

void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramEnvParametersI4uivNV(target, index, count, params);
}

void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::Binding::ProgramLocalParameter4dvARB(target, index, params);
}

void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::Binding::ProgramLocalParameter4fvARB(target, index, params);
}

void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::ProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::Binding::ProgramLocalParameterI4ivNV(target, index, params);
}

void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::ProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::Binding::ProgramLocalParameterI4uivNV(target, index, params);
}

void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::Binding::ProgramLocalParameters4fvEXT(target, index, count, params);
}

void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::Binding::ProgramLocalParametersI4ivNV(target, index, count, params);
}

void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramLocalParametersI4uivNV(target, index, count, params);
}

void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return glbinding::Binding::ProgramNamedParameter4dvNV(id, len, name, v);
}

void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return glbinding::Binding::ProgramNamedParameter4fvNV(id, len, name, v);
}

void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramParameter4dNV(target, index, x, y, z, w);
}

void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return glbinding::Binding::ProgramParameter4dvNV(target, index, v);
}

void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::ProgramParameter4fNV(target, index, x, y, z, w);
}

void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return glbinding::Binding::ProgramParameter4fvNV(target, index, v);
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteriARB(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteriEXT(program, pname, value);
}

void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::ProgramParameters4dvNV(target, index, count, v);
}

void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::ProgramParameters4fvNV(target, index, count, v);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::Binding::ProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::Binding::ProgramStringARB(target, format, len, string);
}

void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return glbinding::Binding::ProgramSubroutineParametersuivNV(target, count, params);
}

void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return glbinding::Binding::ProgramUniform1dEXT(program, location, x);
}

void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform1dvEXT(program, location, count, value);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::Binding::ProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return glbinding::Binding::ProgramUniform1i64NV(program, location, x);
}

void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform1i64vNV(program, location, count, value);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glbinding::Binding::ProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return glbinding::Binding::ProgramUniform1ui64NV(program, location, x);
}

void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform1ui64vNV(program, location, count, value);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glbinding::Binding::ProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return glbinding::Binding::ProgramUniform2dEXT(program, location, x, y);
}

void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform2dvEXT(program, location, count, value);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::ProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::Binding::ProgramUniform2i64NV(program, location, x, y);
}

void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform2i64vNV(program, location, count, value);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::ProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::Binding::ProgramUniform2ui64NV(program, location, x, y);
}

void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform2ui64vNV(program, location, count, value);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::ProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::ProgramUniform3dEXT(program, location, x, y, z);
}

void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform3dvEXT(program, location, count, value);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::ProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::Binding::ProgramUniform3i64NV(program, location, x, y, z);
}

void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform3i64vNV(program, location, count, value);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::ProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::Binding::ProgramUniform3ui64NV(program, location, x, y, z);
}

void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform3ui64vNV(program, location, count, value);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::ProgramUniform4dEXT(program, location, x, y, z, w);
}

void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform4dvEXT(program, location, count, value);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::Binding::ProgramUniform4i64NV(program, location, x, y, z, w);
}

void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::ProgramUniform4i64vNV(program, location, count, value);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::Binding::ProgramUniform4ui64NV(program, location, x, y, z, w);
}

void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniform4ui64vNV(program, location, count, value);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::Binding::ProgramUniformHandleui64ARB(program, location, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::Binding::ProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::Binding::ProgramUniformHandleui64vARB(program, location, count, values);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::Binding::ProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return glbinding::Binding::ProgramUniformui64NV(program, location, value);
}

void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::ProgramUniformui64vNV(program, location, count, value);
}

void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return glbinding::Binding::ProgramVertexLimitNV(target, limit);
}

void glProvokingVertexEXT(GLenum mode)
{
    return glbinding::Binding::ProvokingVertexEXT(mode);
}

void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::Binding::PushClientAttribDefaultEXT(mask);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::Binding::PushGroupMarkerEXT(length, marker);
}

GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return static_cast<gl44ext::GLbitfield>(glbinding::Binding::QueryMatrixxOES(mantissa, exponent));
}

void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return glbinding::Binding::QueryObjectParameteruiAMD(target, id, pname, param);
}

void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return glbinding::Binding::RasterPos2xOES(x, y);
}

void glRasterPos2xvOES(const GLfixed * coords)
{
    return glbinding::Binding::RasterPos2xvOES(coords);
}

void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::RasterPos3xOES(x, y, z);
}

void glRasterPos3xvOES(const GLfixed * coords)
{
    return glbinding::Binding::RasterPos3xvOES(coords);
}

void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return glbinding::Binding::RasterPos4xOES(x, y, z, w);
}

void glRasterPos4xvOES(const GLfixed * coords)
{
    return glbinding::Binding::RasterPos4xvOES(coords);
}

void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::RasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadInstrumentsSGIX(GLint marker)
{
    return glbinding::Binding::ReadInstrumentsSGIX(marker);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::Binding::ReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return glbinding::Binding::RectxOES(x1, y1, x2, y2);
}

void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return glbinding::Binding::RectxvOES(v1, v2);
}

void glReferencePlaneSGIX(const GLdouble * equation)
{
    return glbinding::Binding::ReferencePlaneSGIX(equation);
}

void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorageEXT(target, internalformat, width, height);
}

void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return glbinding::Binding::ReplacementCodePointerSUN(type, stride, pointer);
}

void glReplacementCodeubSUN(GLubyte code)
{
    return glbinding::Binding::ReplacementCodeubSUN(code);
}

void glReplacementCodeubvSUN(const GLubyte * code)
{
    return glbinding::Binding::ReplacementCodeubvSUN(code);
}

void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

void glReplacementCodeuiSUN(GLuint code)
{
    return glbinding::Binding::ReplacementCodeuiSUN(code);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::ReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return glbinding::Binding::ReplacementCodeuiVertex3fvSUN(rc, v);
}

void glReplacementCodeuivSUN(const GLuint * code)
{
    return glbinding::Binding::ReplacementCodeuivSUN(code);
}

void glReplacementCodeusSUN(GLushort code)
{
    return glbinding::Binding::ReplacementCodeusSUN(code);
}

void glReplacementCodeusvSUN(const GLushort * code)
{
    return glbinding::Binding::ReplacementCodeusvSUN(code);
}

void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::Binding::RequestResidentProgramsNV(n, programs);
}

void glResetHistogram(GLenum target)
{
    return glbinding::Binding::ResetHistogram(target);
}

void glResetHistogramEXT(GLenum target)
{
    return glbinding::Binding::ResetHistogramEXT(target);
}

void glResetMinmax(GLenum target)
{
    return glbinding::Binding::ResetMinmax(target);
}

void glResetMinmaxEXT(GLenum target)
{
    return glbinding::Binding::ResetMinmaxEXT(target);
}

void glResizeBuffersMESA()
{
    return glbinding::Binding::ResizeBuffersMESA();
}

void glResolveDepthValuesNV()
{
    return glbinding::Binding::ResolveDepthValuesNV();
}

void glResumeTransformFeedbackNV()
{
    return glbinding::Binding::ResumeTransformFeedbackNV();
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::RotatexOES(angle, x, y, z);
}

void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverageARB(value, invert);
}

void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverageOES(value, invert);
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return glbinding::Binding::SampleMapATI(dst, interp, swizzle);
}

void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return glbinding::Binding::SampleMaskEXT(value, invert);
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return glbinding::Binding::SampleMaskIndexedNV(index, mask);
}

void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return glbinding::Binding::SampleMaskSGIS(value, invert);
}

void glSamplePatternEXT(GLenum pattern)
{
    return glbinding::Binding::SamplePatternEXT(pattern);
}

void glSamplePatternSGIS(GLenum pattern)
{
    return glbinding::Binding::SamplePatternSGIS(pattern);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::ScalexOES(x, y, z);
}

void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::Binding::SecondaryColor3bEXT(red, green, blue);
}

void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return glbinding::Binding::SecondaryColor3bvEXT(v);
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::Binding::SecondaryColor3dEXT(red, green, blue);
}

void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return glbinding::Binding::SecondaryColor3dvEXT(v);
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::Binding::SecondaryColor3fEXT(red, green, blue);
}

void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return glbinding::Binding::SecondaryColor3fvEXT(v);
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::Binding::SecondaryColor3hNV(red, green, blue);
}

void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::SecondaryColor3hvNV(v);
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return glbinding::Binding::SecondaryColor3iEXT(red, green, blue);
}

void glSecondaryColor3ivEXT(const GLint * v)
{
    return glbinding::Binding::SecondaryColor3ivEXT(v);
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::Binding::SecondaryColor3sEXT(red, green, blue);
}

void glSecondaryColor3svEXT(const GLshort * v)
{
    return glbinding::Binding::SecondaryColor3svEXT(v);
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::Binding::SecondaryColor3ubEXT(red, green, blue);
}

void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return glbinding::Binding::SecondaryColor3ubvEXT(v);
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::Binding::SecondaryColor3uiEXT(red, green, blue);
}

void glSecondaryColor3uivEXT(const GLuint * v)
{
    return glbinding::Binding::SecondaryColor3uivEXT(v);
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::Binding::SecondaryColor3usEXT(red, green, blue);
}

void glSecondaryColor3usvEXT(const GLushort * v)
{
    return glbinding::Binding::SecondaryColor3usvEXT(v);
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::SecondaryColorFormatNV(size, type, stride);
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::SecondaryColorPointerEXT(size, type, stride, pointer);
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glbinding::Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::Binding::SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::Binding::SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void glSetFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::SetFenceAPPLE(fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glbinding::Binding::SetFenceNV(fence, condition);
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return glbinding::Binding::SetFragmentShaderConstantATI(dst, value);
}

void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::Binding::SetInvariantEXT(id, type, addr);
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::Binding::SetLocalConstantEXT(id, type, addr);
}

void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return glbinding::Binding::SetMultisamplefvAMD(pname, index, val);
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return glbinding::Binding::ShaderOp1EXT(op, res, arg1);
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return glbinding::Binding::ShaderOp2EXT(op, res, arg1, arg2);
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return glbinding::Binding::ShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return glbinding::Binding::ShaderSourceARB(shaderObj, count, string, length);
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::Binding::SharpenTexFuncSGIS(target, n, points);
}

void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::Binding::SpriteParameterfSGIX(pname, param);
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::SpriteParameterfvSGIX(pname, params);
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return glbinding::Binding::SpriteParameteriSGIX(pname, param);
}

void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::Binding::SpriteParameterivSGIX(pname, params);
}

void glStartInstrumentsSGIX()
{
    return glbinding::Binding::StartInstrumentsSGIX();
}

void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return glbinding::Binding::StencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glbinding::Binding::StencilFillPathNV(path, fillMode, mask);
}

void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::Binding::StencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return glbinding::Binding::StencilOpValueAMD(face, value);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glbinding::Binding::StencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glbinding::Binding::StencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glbinding::Binding::StencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glStopInstrumentsSGIX(GLint marker)
{
    return glbinding::Binding::StopInstrumentsSGIX(marker);
}

void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return glbinding::Binding::StringMarkerGREMEDY(len, string);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return glbinding::Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::Binding::SwizzleEXT(res, in, outX, outY, outZ, outW);
}

void glSyncTextureINTEL(GLuint texture)
{
    return glbinding::Binding::SyncTextureINTEL(texture);
}

void glTagSampleBufferSGIX()
{
    return glbinding::Binding::TagSampleBufferSGIX();
}

void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return glbinding::Binding::Tangent3bEXT(tx, ty, tz);
}

void glTangent3bvEXT(const GLbyte * v)
{
    return glbinding::Binding::Tangent3bvEXT(v);
}

void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return glbinding::Binding::Tangent3dEXT(tx, ty, tz);
}

void glTangent3dvEXT(const GLdouble * v)
{
    return glbinding::Binding::Tangent3dvEXT(v);
}

void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return glbinding::Binding::Tangent3fEXT(tx, ty, tz);
}

void glTangent3fvEXT(const GLfloat * v)
{
    return glbinding::Binding::Tangent3fvEXT(v);
}

void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return glbinding::Binding::Tangent3iEXT(tx, ty, tz);
}

void glTangent3ivEXT(const GLint * v)
{
    return glbinding::Binding::Tangent3ivEXT(v);
}

void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return glbinding::Binding::Tangent3sEXT(tx, ty, tz);
}

void glTangent3svEXT(const GLshort * v)
{
    return glbinding::Binding::Tangent3svEXT(v);
}

void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::TangentPointerEXT(type, stride, pointer);
}

void glTbufferMask3DFX(GLuint mask)
{
    return glbinding::Binding::TbufferMask3DFX(mask);
}

void glTessellationFactorAMD(GLfloat factor)
{
    return glbinding::Binding::TessellationFactorAMD(factor);
}

void glTessellationModeAMD(GLenum mode)
{
    return glbinding::Binding::TessellationModeAMD(mode);
}

GLboolean glTestFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::TestFenceAPPLE(fence);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return glbinding::Binding::TestFenceNV(fence);
}

GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return glbinding::Binding::TestObjectAPPLE(object, name);
}

void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBufferARB(target, internalformat, buffer);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBufferEXT(target, internalformat, buffer);
}

void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::TexBumpParameterfvATI(pname, param);
}

void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return glbinding::Binding::TexBumpParameterivATI(pname, param);
}

void glTexCoord1bOES(GLbyte s)
{
    return glbinding::Binding::TexCoord1bOES(s);
}

void glTexCoord1bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord1bvOES(coords);
}

void glTexCoord1hNV(GLhalfNV s)
{
    return glbinding::Binding::TexCoord1hNV(s);
}

void glTexCoord1hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord1hvNV(v);
}

void glTexCoord1xOES(GLfixed s)
{
    return glbinding::Binding::TexCoord1xOES(s);
}

void glTexCoord1xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord1xvOES(coords);
}

void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return glbinding::Binding::TexCoord2bOES(s, t);
}

void glTexCoord2bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord2bvOES(coords);
}

void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fVertex3fSUN(s, t, x, y, z);
}

void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fVertex3fvSUN(tc, v);
}

void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return glbinding::Binding::TexCoord2hNV(s, t);
}

void glTexCoord2hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord2hvNV(v);
}

void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return glbinding::Binding::TexCoord2xOES(s, t);
}

void glTexCoord2xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord2xvOES(coords);
}

void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::Binding::TexCoord3bOES(s, t, r);
}

void glTexCoord3bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord3bvOES(coords);
}

void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::Binding::TexCoord3hNV(s, t, r);
}

void glTexCoord3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord3hvNV(v);
}

void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::Binding::TexCoord3xOES(s, t, r);
}

void glTexCoord3xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord3xvOES(coords);
}

void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::Binding::TexCoord4bOES(s, t, r, q);
}

void glTexCoord4bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord4bvOES(coords);
}

void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::TexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::TexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::TexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::Binding::TexCoord4fVertex4fvSUN(tc, v);
}

void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::Binding::TexCoord4hNV(s, t, r, q);
}

void glTexCoord4hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord4hvNV(v);
}

void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::Binding::TexCoord4xOES(s, t, r, q);
}

void glTexCoord4xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord4xvOES(coords);
}

void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::TexCoordFormatNV(size, type, stride);
}

void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::TexCoordPointerEXT(size, type, stride, count, pointer);
}

void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::TexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::Binding::TexCoordPointervINTEL(size, type, pointer);
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::Binding::TexEnvxOES(target, pname, param);
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::TexEnvxvOES(target, pname, params);
}

void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return glbinding::Binding::TexFilterFuncSGIS(target, filter, n, weights);
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return glbinding::Binding::TexGenxOES(coord, pname, param);
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::TexGenxvOES(coord, pname, params);
}

void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::Binding::TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameterIivEXT(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TexParameterIuivEXT(target, pname, params);
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::Binding::TexParameterxOES(target, pname, param);
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::TexParameterxvOES(target, pname, params);
}

void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::TexRenderbufferNV(target, renderbuffer);
}

void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::Binding::TexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

void glTextureBarrier()
{
    return glbinding::Binding::TextureBarrier();
}

void glTextureBarrierNV()
{
    return glbinding::Binding::TextureBarrierNV();
}

void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TextureBuffer(texture, internalformat, buffer);
}

void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TextureBufferEXT(texture, target, internalformat, buffer);
}

void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TextureBufferRange(texture, internalformat, buffer, offset, size);
}

void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::Binding::TextureColorMaskSGIS(red, green, blue, alpha);
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureLightEXT(GLenum pname)
{
    return glbinding::Binding::TextureLightEXT(pname);
}

void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::Binding::TextureMaterialEXT(face, mode);
}

void glTextureNormalEXT(GLenum mode)
{
    return glbinding::Binding::TextureNormalEXT(mode);
}

void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::Binding::TexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterIiv(texture, pname, params);
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterIivEXT(texture, target, pname, params);
}

void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TextureParameterIuiv(texture, pname, params);
}

void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TextureParameterIuivEXT(texture, target, pname, params);
}

void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TextureParameterf(texture, pname, param);
}

void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TextureParameterfEXT(texture, target, pname, param);
}

void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::TextureParameterfv(texture, pname, param);
}

void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TextureParameterfvEXT(texture, target, pname, params);
}

void glTextureParameteri(GLuint texture, GLenum pname, GLint param)
{
    return glbinding::Binding::TextureParameteri(texture, pname, param);
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TextureParameteriEXT(texture, target, pname, param);
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param)
{
    return glbinding::Binding::TextureParameteriv(texture, pname, param);
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterivEXT(texture, target, pname, params);
}

void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::Binding::TextureRangeAPPLE(target, length, pointer);
}

void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::TextureRenderbufferEXT(texture, target, renderbuffer);
}

void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TextureStorage1D(texture, levels, internalformat, width);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TextureStorage2D(texture, levels, internalformat, width, height);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TextureStorage3D(texture, levels, internalformat, width, height, depth);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::Binding::TextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return glbinding::Binding::TrackMatrixNV(target, address, matrix, transform);
}

void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackAttribsNV(count, attribs, bufferMode);
}

void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer)
{
    return glbinding::Binding::TransformFeedbackBufferBase(xfb, index, buffer);
}

void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::TranslatexOES(x, y, z);
}

void glUniform1fARB(GLint location, GLfloat v0)
{
    return glbinding::Binding::Uniform1fARB(location, v0);
}

void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform1fvARB(location, count, value);
}

void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return glbinding::Binding::Uniform1i64NV(location, x);
}

void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::Uniform1i64vNV(location, count, value);
}

void glUniform1iARB(GLint location, GLint v0)
{
    return glbinding::Binding::Uniform1iARB(location, v0);
}

void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform1ivARB(location, count, value);
}

void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return glbinding::Binding::Uniform1ui64NV(location, x);
}

void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::Uniform1ui64vNV(location, count, value);
}

void glUniform1uiEXT(GLint location, GLuint v0)
{
    return glbinding::Binding::Uniform1uiEXT(location, v0);
}

void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform1uivEXT(location, count, value);
}

void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::Uniform2fARB(location, v0, v1);
}

void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform2fvARB(location, count, value);
}

void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::Binding::Uniform2i64NV(location, x, y);
}

void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::Uniform2i64vNV(location, count, value);
}

void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::Uniform2iARB(location, v0, v1);
}

void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform2ivARB(location, count, value);
}

void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::Binding::Uniform2ui64NV(location, x, y);
}

void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::Uniform2ui64vNV(location, count, value);
}

void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::Uniform2uiEXT(location, v0, v1);
}

void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform2uivEXT(location, count, value);
}

void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::Uniform3fARB(location, v0, v1, v2);
}

void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform3fvARB(location, count, value);
}

void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::Binding::Uniform3i64NV(location, x, y, z);
}

void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::Uniform3i64vNV(location, count, value);
}

void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::Uniform3iARB(location, v0, v1, v2);
}

void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform3ivARB(location, count, value);
}

void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::Binding::Uniform3ui64NV(location, x, y, z);
}

void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::Uniform3ui64vNV(location, count, value);
}

void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::Uniform3uiEXT(location, v0, v1, v2);
}

void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform3uivEXT(location, count, value);
}

void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::Uniform4fARB(location, v0, v1, v2, v3);
}

void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform4fvARB(location, count, value);
}

void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::Binding::Uniform4i64NV(location, x, y, z, w);
}

void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::Binding::Uniform4i64vNV(location, count, value);
}

void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::Uniform4iARB(location, v0, v1, v2, v3);
}

void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform4ivARB(location, count, value);
}

void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::Binding::Uniform4ui64NV(location, x, y, z, w);
}

void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::Uniform4ui64vNV(location, count, value);
}

void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::Uniform4uiEXT(location, v0, v1, v2, v3);
}

void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform4uivEXT(location, count, value);
}

void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return glbinding::Binding::UniformBufferEXT(program, location, buffer);
}

void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return glbinding::Binding::UniformHandleui64ARB(location, value);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return glbinding::Binding::UniformHandleui64NV(location, value);
}

void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::Binding::UniformHandleui64vARB(location, count, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::Binding::UniformHandleui64vNV(location, count, value);
}

void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2fvARB(location, count, transpose, value);
}

void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3fvARB(location, count, transpose, value);
}

void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4fvARB(location, count, transpose, value);
}

void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return glbinding::Binding::Uniformui64NV(location, value);
}

void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::Binding::Uniformui64vNV(location, count, value);
}

void glUnlockArraysEXT()
{
    return glbinding::Binding::UnlockArraysEXT();
}

GLboolean glUnmapBufferARB(GLenum target)
{
    return glbinding::Binding::UnmapBufferARB(target);
}

GLboolean glUnmapNamedBuffer(GLuint buffer)
{
    return glbinding::Binding::UnmapNamedBuffer(buffer);
}

GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return glbinding::Binding::UnmapNamedBufferEXT(buffer);
}

void glUnmapObjectBufferATI(GLuint buffer)
{
    return glbinding::Binding::UnmapObjectBufferATI(buffer);
}

void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return glbinding::Binding::UnmapTexture2DINTEL(texture, level);
}

void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return glbinding::Binding::UpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

void glUseProgramObjectARB(GLhandleARB programObj)
{
    return glbinding::Binding::UseProgramObjectARB(programObj);
}

void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return glbinding::Binding::UseShaderProgramEXT(type, program);
}

void glVDPAUFiniNV()
{
    return glbinding::Binding::VDPAUFiniNV();
}

void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::Binding::VDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return glbinding::Binding::VDPAUInitNV(vdpDevice, getProcAddress);
}

GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::Binding::VDPAUIsSurfaceNV(surface);
}

void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::Binding::VDPAUMapSurfacesNV(numSurfaces, surfaces);
}

GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::Binding::VDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::Binding::VDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return glbinding::Binding::VDPAUSurfaceAccessNV(surface, access);
}

void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::Binding::VDPAUUnmapSurfacesNV(numSurface, surfaces);
}

void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::Binding::VDPAUUnregisterSurfaceNV(surface);
}

void glValidateProgramARB(GLhandleARB programObj)
{
    return glbinding::Binding::ValidateProgramARB(programObj);
}

void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::Binding::VariantArrayObjectATI(id, type, stride, buffer, offset);
}

void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return glbinding::Binding::VariantPointerEXT(id, type, stride, addr);
}

void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return glbinding::Binding::VariantbvEXT(id, addr);
}

void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return glbinding::Binding::VariantdvEXT(id, addr);
}

void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return glbinding::Binding::VariantfvEXT(id, addr);
}

void glVariantivEXT(GLuint id, const GLint * addr)
{
    return glbinding::Binding::VariantivEXT(id, addr);
}

void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return glbinding::Binding::VariantsvEXT(id, addr);
}

void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return glbinding::Binding::VariantubvEXT(id, addr);
}

void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return glbinding::Binding::VariantuivEXT(id, addr);
}

void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return glbinding::Binding::VariantusvEXT(id, addr);
}

void glVertex2bOES(GLbyte x, GLbyte y)
{
    return glbinding::Binding::Vertex2bOES(x, y);
}

void glVertex2bvOES(const GLbyte * coords)
{
    return glbinding::Binding::Vertex2bvOES(coords);
}

void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return glbinding::Binding::Vertex2hNV(x, y);
}

void glVertex2hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Vertex2hvNV(v);
}

void glVertex2xOES(GLfixed x)
{
    return glbinding::Binding::Vertex2xOES(x);
}

void glVertex2xvOES(const GLfixed * coords)
{
    return glbinding::Binding::Vertex2xvOES(coords);
}

void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return glbinding::Binding::Vertex3bOES(x, y, z);
}

void glVertex3bvOES(const GLbyte * coords)
{
    return glbinding::Binding::Vertex3bvOES(coords);
}

void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::Binding::Vertex3hNV(x, y, z);
}

void glVertex3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Vertex3hvNV(v);
}

void glVertex3xOES(GLfixed x, GLfixed y)
{
    return glbinding::Binding::Vertex3xOES(x, y);
}

void glVertex3xvOES(const GLfixed * coords)
{
    return glbinding::Binding::Vertex3xvOES(coords);
}

void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
    return glbinding::Binding::Vertex4bOES(x, y, z, w);
}

void glVertex4bvOES(const GLbyte * coords)
{
    return glbinding::Binding::Vertex4bvOES(coords);
}

void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::Binding::Vertex4hNV(x, y, z, w);
}

void glVertex4hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Vertex4hvNV(v);
}

void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::Vertex4xOES(x, y, z);
}

void glVertex4xvOES(const GLfixed * coords)
{
    return glbinding::Binding::Vertex4xvOES(coords);
}

void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::Binding::VertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::VertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::Binding::VertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer)
{
    return glbinding::Binding::VertexArrayElementBuffer(vaobj, buffer);
}

void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return glbinding::Binding::VertexArrayParameteriAPPLE(pname, param);
}

void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::Binding::VertexArrayRangeAPPLE(length, pointer);
}

void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return glbinding::Binding::VertexArrayRangeNV(length, pointer);
}

void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::Binding::VertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return glbinding::Binding::VertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::Binding::VertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::VertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::Binding::VertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}

void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::Binding::VertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttrib1dARB(index, x);
}

void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttrib1dNV(index, x);
}

void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib1dvARB(index, v);
}

void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib1dvNV(index, v);
}

void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return glbinding::Binding::VertexAttrib1fARB(index, x);
}

void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return glbinding::Binding::VertexAttrib1fNV(index, x);
}

void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib1fvARB(index, v);
}

void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib1fvNV(index, v);
}

void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return glbinding::Binding::VertexAttrib1hNV(index, x);
}

void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttrib1hvNV(index, v);
}

void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return glbinding::Binding::VertexAttrib1sARB(index, x);
}

void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return glbinding::Binding::VertexAttrib1sNV(index, x);
}

void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib1svARB(index, v);
}

void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib1svNV(index, v);
}

void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttrib2dARB(index, x, y);
}

void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttrib2dNV(index, x, y);
}

void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib2dvARB(index, v);
}

void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib2dvNV(index, v);
}

void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::Binding::VertexAttrib2fARB(index, x, y);
}

void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::Binding::VertexAttrib2fNV(index, x, y);
}

void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib2fvARB(index, v);
}

void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib2fvNV(index, v);
}

void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return glbinding::Binding::VertexAttrib2hNV(index, x, y);
}

void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttrib2hvNV(index, v);
}

void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return glbinding::Binding::VertexAttrib2sARB(index, x, y);
}

void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return glbinding::Binding::VertexAttrib2sNV(index, x, y);
}

void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib2svARB(index, v);
}

void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib2svNV(index, v);
}

void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttrib3dARB(index, x, y, z);
}

void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttrib3dNV(index, x, y, z);
}

void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib3dvARB(index, v);
}

void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib3dvNV(index, v);
}

void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::VertexAttrib3fARB(index, x, y, z);
}

void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::VertexAttrib3fNV(index, x, y, z);
}

void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib3fvARB(index, v);
}

void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib3fvNV(index, v);
}

void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::Binding::VertexAttrib3hNV(index, x, y, z);
}

void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttrib3hvNV(index, v);
}

void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::VertexAttrib3sARB(index, x, y, z);
}

void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::VertexAttrib3sNV(index, x, y, z);
}

void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib3svARB(index, v);
}

void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib3svNV(index, v);
}

void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4NbvARB(index, v);
}

void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4NivARB(index, v);
}

void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4NsvARB(index, v);
}

void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::Binding::VertexAttrib4NubARB(index, x, y, z, w);
}

void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4NubvARB(index, v);
}

void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4NuivARB(index, v);
}

void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4NusvARB(index, v);
}

void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4bvARB(index, v);
}

void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttrib4dARB(index, x, y, z, w);
}

void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttrib4dNV(index, x, y, z, w);
}

void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib4dvARB(index, v);
}

void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib4dvNV(index, v);
}

void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::VertexAttrib4fARB(index, x, y, z, w);
}

void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::VertexAttrib4fNV(index, x, y, z, w);
}

void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib4fvARB(index, v);
}

void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib4fvNV(index, v);
}

void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::Binding::VertexAttrib4hNV(index, x, y, z, w);
}

void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttrib4hvNV(index, v);
}

void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4ivARB(index, v);
}

void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::VertexAttrib4sARB(index, x, y, z, w);
}

void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::VertexAttrib4sNV(index, x, y, z, w);
}

void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4svARB(index, v);
}

void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4svNV(index, v);
}

void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::Binding::VertexAttrib4ubNV(index, x, y, z, w);
}

void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4ubvARB(index, v);
}

void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4ubvNV(index, v);
}

void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4uivARB(index, v);
}

void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4usvARB(index, v);
}

void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::Binding::VertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return glbinding::Binding::VertexAttribDivisorARB(index, divisor);
}

void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return glbinding::Binding::VertexAttribFormatNV(index, size, type, normalized, stride);
}

void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return glbinding::Binding::VertexAttribI1iEXT(index, x);
}

void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI1ivEXT(index, v);
}

void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return glbinding::Binding::VertexAttribI1uiEXT(index, x);
}

void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI1uivEXT(index, v);
}

void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return glbinding::Binding::VertexAttribI2iEXT(index, x, y);
}

void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI2ivEXT(index, v);
}

void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return glbinding::Binding::VertexAttribI2uiEXT(index, x, y);
}

void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI2uivEXT(index, v);
}

void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::Binding::VertexAttribI3iEXT(index, x, y, z);
}

void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI3ivEXT(index, v);
}

void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::Binding::VertexAttribI3uiEXT(index, x, y, z);
}

void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI3uivEXT(index, v);
}

void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttribI4bvEXT(index, v);
}

void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::VertexAttribI4iEXT(index, x, y, z, w);
}

void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI4ivEXT(index, v);
}

void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttribI4svEXT(index, v);
}

void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttribI4ubvEXT(index, v);
}

void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::VertexAttribI4uiEXT(index, x, y, z, w);
}

void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI4uivEXT(index, v);
}

void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttribI4usvEXT(index, v);
}

void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::VertexAttribIFormatNV(index, size, type, stride);
}

void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribIPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttribL1dEXT(index, x);
}

void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL1dvEXT(index, v);
}

void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return glbinding::Binding::VertexAttribL1i64NV(index, x);
}

void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::Binding::VertexAttribL1i64vNV(index, v);
}

void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return glbinding::Binding::VertexAttribL1ui64ARB(index, x);
}

void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return glbinding::Binding::VertexAttribL1ui64NV(index, x);
}

void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return glbinding::Binding::VertexAttribL1ui64vARB(index, v);
}

void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::Binding::VertexAttribL1ui64vNV(index, v);
}

void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttribL2dEXT(index, x, y);
}

void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL2dvEXT(index, v);
}

void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return glbinding::Binding::VertexAttribL2i64NV(index, x, y);
}

void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::Binding::VertexAttribL2i64vNV(index, v);
}

void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::Binding::VertexAttribL2ui64NV(index, x, y);
}

void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::Binding::VertexAttribL2ui64vNV(index, v);
}

void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttribL3dEXT(index, x, y, z);
}

void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL3dvEXT(index, v);
}

void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::Binding::VertexAttribL3i64NV(index, x, y, z);
}

void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::Binding::VertexAttribL3i64vNV(index, v);
}

void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::Binding::VertexAttribL3ui64NV(index, x, y, z);
}

void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::Binding::VertexAttribL3ui64vNV(index, v);
}

void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttribL4dEXT(index, x, y, z, w);
}

void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL4dvEXT(index, v);
}

void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::Binding::VertexAttribL4i64NV(index, x, y, z, w);
}

void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::Binding::VertexAttribL4i64vNV(index, v);
}

void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::Binding::VertexAttribL4ui64NV(index, x, y, z, w);
}

void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::Binding::VertexAttribL4ui64vNV(index, v);
}

void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::VertexAttribLFormatNV(index, size, type, stride);
}

void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribLPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return glbinding::Binding::VertexAttribParameteriAMD(index, pname, param);
}

void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribPointerNV(index, fsize, type, stride, pointer);
}

void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribs1dvNV(index, count, v);
}

void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::VertexAttribs1fvNV(index, count, v);
}

void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttribs1hvNV(index, n, v);
}

void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::Binding::VertexAttribs1svNV(index, count, v);
}

void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribs2dvNV(index, count, v);
}

void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::VertexAttribs2fvNV(index, count, v);
}

void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttribs2hvNV(index, n, v);
}

void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::Binding::VertexAttribs2svNV(index, count, v);
}

void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribs3dvNV(index, count, v);
}

void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::VertexAttribs3fvNV(index, count, v);
}

void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttribs3hvNV(index, n, v);
}

void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::Binding::VertexAttribs3svNV(index, count, v);
}

void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribs4dvNV(index, count, v);
}

void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::VertexAttribs4fvNV(index, count, v);
}

void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::Binding::VertexAttribs4hvNV(index, n, v);
}

void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::Binding::VertexAttribs4svNV(index, count, v);
}

void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return glbinding::Binding::VertexAttribs4ubvNV(index, count, v);
}

void glVertexBlendARB(GLint count)
{
    return glbinding::Binding::VertexBlendARB(count);
}

void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return glbinding::Binding::VertexBlendEnvfATI(pname, param);
}

void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return glbinding::Binding::VertexBlendEnviATI(pname, param);
}

void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::VertexFormatNV(size, type, stride);
}

void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::VertexPointerEXT(size, type, stride, count, pointer);
}

void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::VertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::Binding::VertexPointervINTEL(size, type, pointer);
}

void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return glbinding::Binding::VertexStream1dATI(stream, x);
}

void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::Binding::VertexStream1dvATI(stream, coords);
}

void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return glbinding::Binding::VertexStream1fATI(stream, x);
}

void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::Binding::VertexStream1fvATI(stream, coords);
}

void glVertexStream1iATI(GLenum stream, GLint x)
{
    return glbinding::Binding::VertexStream1iATI(stream, x);
}

void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::Binding::VertexStream1ivATI(stream, coords);
}

void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return glbinding::Binding::VertexStream1sATI(stream, x);
}

void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::Binding::VertexStream1svATI(stream, coords);
}

void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexStream2dATI(stream, x, y);
}

void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::Binding::VertexStream2dvATI(stream, coords);
}

void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return glbinding::Binding::VertexStream2fATI(stream, x, y);
}

void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::Binding::VertexStream2fvATI(stream, coords);
}

void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return glbinding::Binding::VertexStream2iATI(stream, x, y);
}

void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::Binding::VertexStream2ivATI(stream, coords);
}

void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return glbinding::Binding::VertexStream2sATI(stream, x, y);
}

void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::Binding::VertexStream2svATI(stream, coords);
}

void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexStream3dATI(stream, x, y, z);
}

void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::Binding::VertexStream3dvATI(stream, coords);
}

void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::VertexStream3fATI(stream, x, y, z);
}

void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::Binding::VertexStream3fvATI(stream, coords);
}

void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return glbinding::Binding::VertexStream3iATI(stream, x, y, z);
}

void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::Binding::VertexStream3ivATI(stream, coords);
}

void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::VertexStream3sATI(stream, x, y, z);
}

void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::Binding::VertexStream3svATI(stream, coords);
}

void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexStream4dATI(stream, x, y, z, w);
}

void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::Binding::VertexStream4dvATI(stream, coords);
}

void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::VertexStream4fATI(stream, x, y, z, w);
}

void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::Binding::VertexStream4fvATI(stream, coords);
}

void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::VertexStream4iATI(stream, x, y, z, w);
}

void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::Binding::VertexStream4ivATI(stream, coords);
}

void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::VertexStream4sATI(stream, x, y, z, w);
}

void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::Binding::VertexStream4svATI(stream, coords);
}

void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexWeightPointerEXT(size, type, stride, pointer);
}

void glVertexWeightfEXT(GLfloat weight)
{
    return glbinding::Binding::VertexWeightfEXT(weight);
}

void glVertexWeightfvEXT(const GLfloat * weight)
{
    return glbinding::Binding::VertexWeightfvEXT(weight);
}

void glVertexWeighthNV(GLhalfNV weight)
{
    return glbinding::Binding::VertexWeighthNV(weight);
}

void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return glbinding::Binding::VertexWeighthvNV(weight);
}

GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return static_cast<gl44ext::GLenum>(glbinding::Binding::VideoCaptureNV(video_capture_slot, sequence_num, capture_time));
}

void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return glbinding::Binding::VideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::VideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return glbinding::Binding::VideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glbinding::Binding::WeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::WeightPointerARB(size, type, stride, pointer);
}

void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return glbinding::Binding::WeightbvARB(size, weights);
}

void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return glbinding::Binding::WeightdvARB(size, weights);
}

void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return glbinding::Binding::WeightfvARB(size, weights);
}

void glWeightivARB(GLint size, const GLint * weights)
{
    return glbinding::Binding::WeightivARB(size, weights);
}

void glWeightsvARB(GLint size, const GLshort * weights)
{
    return glbinding::Binding::WeightsvARB(size, weights);
}

void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return glbinding::Binding::WeightubvARB(size, weights);
}

void glWeightuivARB(GLint size, const GLuint * weights)
{
    return glbinding::Binding::WeightuivARB(size, weights);
}

void glWeightusvARB(GLint size, const GLushort * weights)
{
    return glbinding::Binding::WeightusvARB(size, weights);
}

void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return glbinding::Binding::WindowPos2dARB(x, y);
}

void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return glbinding::Binding::WindowPos2dMESA(x, y);
}

void glWindowPos2dvARB(const GLdouble * v)
{
    return glbinding::Binding::WindowPos2dvARB(v);
}

void glWindowPos2dvMESA(const GLdouble * v)
{
    return glbinding::Binding::WindowPos2dvMESA(v);
}

void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return glbinding::Binding::WindowPos2fARB(x, y);
}

void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return glbinding::Binding::WindowPos2fMESA(x, y);
}

void glWindowPos2fvARB(const GLfloat * v)
{
    return glbinding::Binding::WindowPos2fvARB(v);
}

void glWindowPos2fvMESA(const GLfloat * v)
{
    return glbinding::Binding::WindowPos2fvMESA(v);
}

void glWindowPos2iARB(GLint x, GLint y)
{
    return glbinding::Binding::WindowPos2iARB(x, y);
}

void glWindowPos2iMESA(GLint x, GLint y)
{
    return glbinding::Binding::WindowPos2iMESA(x, y);
}

void glWindowPos2ivARB(const GLint * v)
{
    return glbinding::Binding::WindowPos2ivARB(v);
}

void glWindowPos2ivMESA(const GLint * v)
{
    return glbinding::Binding::WindowPos2ivMESA(v);
}

void glWindowPos2sARB(GLshort x, GLshort y)
{
    return glbinding::Binding::WindowPos2sARB(x, y);
}

void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return glbinding::Binding::WindowPos2sMESA(x, y);
}

void glWindowPos2svARB(const GLshort * v)
{
    return glbinding::Binding::WindowPos2svARB(v);
}

void glWindowPos2svMESA(const GLshort * v)
{
    return glbinding::Binding::WindowPos2svMESA(v);
}

void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::WindowPos3dARB(x, y, z);
}

void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::WindowPos3dMESA(x, y, z);
}

void glWindowPos3dvARB(const GLdouble * v)
{
    return glbinding::Binding::WindowPos3dvARB(v);
}

void glWindowPos3dvMESA(const GLdouble * v)
{
    return glbinding::Binding::WindowPos3dvMESA(v);
}

void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::WindowPos3fARB(x, y, z);
}

void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::WindowPos3fMESA(x, y, z);
}

void glWindowPos3fvARB(const GLfloat * v)
{
    return glbinding::Binding::WindowPos3fvARB(v);
}

void glWindowPos3fvMESA(const GLfloat * v)
{
    return glbinding::Binding::WindowPos3fvMESA(v);
}

void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return glbinding::Binding::WindowPos3iARB(x, y, z);
}

void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return glbinding::Binding::WindowPos3iMESA(x, y, z);
}

void glWindowPos3ivARB(const GLint * v)
{
    return glbinding::Binding::WindowPos3ivARB(v);
}

void glWindowPos3ivMESA(const GLint * v)
{
    return glbinding::Binding::WindowPos3ivMESA(v);
}

void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::WindowPos3sARB(x, y, z);
}

void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::WindowPos3sMESA(x, y, z);
}

void glWindowPos3svARB(const GLshort * v)
{
    return glbinding::Binding::WindowPos3svARB(v);
}

void glWindowPos3svMESA(const GLshort * v)
{
    return glbinding::Binding::WindowPos3svMESA(v);
}

void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::WindowPos4dMESA(x, y, z, w);
}

void glWindowPos4dvMESA(const GLdouble * v)
{
    return glbinding::Binding::WindowPos4dvMESA(v);
}

void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::WindowPos4fMESA(x, y, z, w);
}

void glWindowPos4fvMESA(const GLfloat * v)
{
    return glbinding::Binding::WindowPos4fvMESA(v);
}

void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::WindowPos4iMESA(x, y, z, w);
}

void glWindowPos4ivMESA(const GLint * v)
{
    return glbinding::Binding::WindowPos4ivMESA(v);
}

void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::WindowPos4sMESA(x, y, z, w);
}

void glWindowPos4svMESA(const GLshort * v)
{
    return glbinding::Binding::WindowPos4svMESA(v);
}

void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::Binding::WriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl44ext
