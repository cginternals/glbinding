
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return Binding::BeginConditionalRenderNV(id, mode);
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

void glBeginQueryEXT(GLenum target, GLuint id)
{
    return Binding::BeginQueryEXT(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return Binding::BeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return Binding::BindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return Binding::BindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return Binding::BindFragDataLocationEXT(program, color, name);
}

void glBindFragDataLocationIndexedEXT(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return Binding::BindFragDataLocationIndexedEXT(program, colorNumber, index, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return Binding::BindFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return Binding::BindProgramPipeline(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return Binding::BindSampler(unit, sampler);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return Binding::BindTexture(target, texture);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return Binding::BindTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return Binding::BindVertexArray(array);
}

void glBindVertexArrayOES(GLuint array)
{
    return Binding::BindVertexArrayOES(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBlendBarrier()
{
    return Binding::BlendBarrier();
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

void glBlendEquation(GLenum mode)
{
    return Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparateiOES(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return Binding::BlendEquationi(buf, mode);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode)
{
    return Binding::BlendEquationiEXT(buf, mode);
}

void glBlendEquationiOES(GLuint buf, GLenum mode)
{
    return Binding::BlendEquationiOES(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return Binding::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return Binding::BlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return Binding::BlendFuncSeparateiOES(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return Binding::BlendFunci(buf, src, dst);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
    return Binding::BlendFunciEXT(buf, src, dst);
}

void glBlendFunciOES(GLuint buf, GLenum src, GLenum dst)
{
    return Binding::BlendFunciOES(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return Binding::BlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return Binding::BlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return Binding::BlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return Binding::BufferData(target, size, data, usage);
}

void glBufferStorageEXT(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return Binding::BufferStorageEXT(target, size, data, flags);
}

void glBufferStorageExternalEXT(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, MapBufferUsageMask flags)
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




} // namespace gles
