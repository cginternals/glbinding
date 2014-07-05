#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl43.h>

#include <glbinding/FunctionObjects.h>


namespace gl43
{

using namespace gl;


inline void glAccum(gl43::GLenum op, GLfloat value)
{
   	return FunctionObjects::Accum(static_cast<gl::GLenum>(op), value);
}

inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
   	return FunctionObjects::ActiveShaderProgram(pipeline, program);
}

inline void glActiveTexture(gl43::GLenum texture)
{
   	return FunctionObjects::ActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glAlphaFunc(gl43::GLenum func, GLfloat ref)
{
   	return FunctionObjects::AlphaFunc(static_cast<gl::GLenum>(func), ref);
}

inline void glAlphaFuncx(gl43::GLenum func, GLfixed ref)
{
   	return FunctionObjects::AlphaFuncx(static_cast<gl::GLenum>(func), ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
   	return FunctionObjects::AreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
   	return FunctionObjects::ArrayElement(i);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::AttachShader(program, shader);
}

inline void glBegin(gl43::GLenum mode)
{
   	return FunctionObjects::Begin(static_cast<gl::GLenum>(mode));
}

inline void glBeginConditionalRender(GLuint id, gl43::GLenum mode)
{
   	return FunctionObjects::BeginConditionalRender(id, static_cast<gl::GLenum>(mode));
}

inline void glBeginQuery(gl43::GLenum target, GLuint id)
{
   	return FunctionObjects::BeginQuery(static_cast<gl::GLenum>(target), id);
}

inline void glBeginQueryIndexed(gl43::GLenum target, GLuint index, GLuint id)
{
   	return FunctionObjects::BeginQueryIndexed(static_cast<gl::GLenum>(target), index, id);
}

inline void glBeginTransformFeedback(gl43::GLenum primitiveMode)
{
   	return FunctionObjects::BeginTransformFeedback(static_cast<gl::GLenum>(primitiveMode));
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(gl43::GLenum target, GLuint buffer)
{
   	return FunctionObjects::BindBuffer(static_cast<gl::GLenum>(target), buffer);
}

inline void glBindBufferBase(gl43::GLenum target, GLuint index, GLuint buffer)
{
   	return FunctionObjects::BindBufferBase(static_cast<gl::GLenum>(target), index, buffer);
}

inline void glBindBufferRange(gl43::GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::BindBufferRange(static_cast<gl::GLenum>(target), index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(gl43::GLenum target, GLuint framebuffer)
{
   	return FunctionObjects::BindFramebuffer(static_cast<gl::GLenum>(target), framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, gl43::GLenum access, gl43::GLenum format)
{
   	return FunctionObjects::BindImageTexture(unit, texture, level, layered, layer, static_cast<gl::GLenum>(access), static_cast<gl::GLenum>(format));
}

inline void glBindProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::BindProgramPipeline(pipeline);
}

inline void glBindRenderbuffer(gl43::GLenum target, GLuint renderbuffer)
{
   	return FunctionObjects::BindRenderbuffer(static_cast<gl::GLenum>(target), renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
   	return FunctionObjects::BindSampler(unit, sampler);
}

inline void glBindTexture(gl43::GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(static_cast<gl::GLenum>(target), texture);
}

inline void glBindTransformFeedback(gl43::GLenum target, GLuint id)
{
   	return FunctionObjects::BindTransformFeedback(static_cast<gl::GLenum>(target), id);
}

inline void glBindVertexArray(GLuint array)
{
   	return FunctionObjects::BindVertexArray(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
   	return FunctionObjects::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
   	return FunctionObjects::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(gl43::GLenum mode)
{
   	return FunctionObjects::BlendEquation(static_cast<gl::GLenum>(mode));
}

inline void glBlendEquationSeparate(gl43::GLenum modeRGB, gl43::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparate(static_cast<gl::GLenum>(modeRGB), static_cast<gl::GLenum>(modeAlpha));
}

inline void glBlendEquationSeparatei(GLuint buf, gl43::GLenum modeRGB, gl43::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparatei(buf, static_cast<gl::GLenum>(modeRGB), static_cast<gl::GLenum>(modeAlpha));
}

inline void glBlendEquationi(GLuint buf, gl43::GLenum mode)
{
   	return FunctionObjects::BlendEquationi(buf, static_cast<gl::GLenum>(mode));
}

inline void glBlendFunc(gl43::GLenum sfactor, gl43::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(static_cast<gl::GLenum>(sfactor), static_cast<gl::GLenum>(dfactor));
}

inline void glBlendFuncSeparate(gl43::GLenum sfactorRGB, gl43::GLenum dfactorRGB, gl43::GLenum sfactorAlpha, gl43::GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(static_cast<gl::GLenum>(sfactorRGB), static_cast<gl::GLenum>(dfactorRGB), static_cast<gl::GLenum>(sfactorAlpha), static_cast<gl::GLenum>(dfactorAlpha));
}

inline void glBlendFuncSeparatei(GLuint buf, gl43::GLenum srcRGB, gl43::GLenum dstRGB, gl43::GLenum srcAlpha, gl43::GLenum dstAlpha)
{
   	return FunctionObjects::BlendFuncSeparatei(buf, static_cast<gl::GLenum>(srcRGB), static_cast<gl::GLenum>(dstRGB), static_cast<gl::GLenum>(srcAlpha), static_cast<gl::GLenum>(dstAlpha));
}

inline void glBlendFunci(GLuint buf, gl43::GLenum src, gl43::GLenum dst)
{
   	return FunctionObjects::BlendFunci(buf, static_cast<gl::GLenum>(src), static_cast<gl::GLenum>(dst));
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, gl43::GLbitfield mask, gl43::GLenum filter)
{
   	return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, static_cast<gl::GLbitfield>(mask), static_cast<gl::GLenum>(filter));
}

inline void glBufferData(gl43::GLenum target, GLsizeiptr size, const void * data, gl43::GLenum usage)
{
   	return FunctionObjects::BufferData(static_cast<gl::GLenum>(target), size, data, static_cast<gl::GLenum>(usage));
}

inline void glBufferSubData(gl43::GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
   	return FunctionObjects::BufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline void glCallList(GLuint list)
{
   	return FunctionObjects::CallList(list);
}

inline void glCallLists(GLsizei n, gl43::GLenum type, const void * lists)
{
   	return FunctionObjects::CallLists(n, static_cast<gl::GLenum>(type), lists);
}

inline GLenum glCheckFramebufferStatus(gl43::GLenum target)
{
   	return static_cast<gl43::GLenum>(FunctionObjects::CheckFramebufferStatus(static_cast<gl::GLenum>(target)));
}

inline void glClampColor(gl43::GLenum target, gl43::GLenum clamp)
{
   	return FunctionObjects::ClampColor(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(clamp));
}

inline void glClear(gl43::GLbitfield mask)
{
   	return FunctionObjects::Clear(static_cast<gl::GLbitfield>(mask));
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearAccum(red, green, blue, alpha);
}

inline void glClearBufferData(gl43::GLenum target, gl43::GLenum internalformat, gl43::GLenum format, gl43::GLenum type, const void * data)
{
   	return FunctionObjects::ClearBufferData(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), data);
}

inline void glClearBufferSubData(gl43::GLenum target, gl43::GLenum internalformat, GLintptr offset, GLsizeiptr size, gl43::GLenum format, gl43::GLenum type, const void * data)
{
   	return FunctionObjects::ClearBufferSubData(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), offset, size, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), data);
}

inline void glClearBufferfi(gl43::GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   	return FunctionObjects::ClearBufferfi(static_cast<gl::GLenum>(buffer), drawbuffer, depth, stencil);
}

inline void glClearBufferfv(gl43::GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
   	return FunctionObjects::ClearBufferfv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferiv(gl43::GLenum buffer, GLint drawbuffer, const GLint * value)
{
   	return FunctionObjects::ClearBufferiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferuiv(gl43::GLenum buffer, GLint drawbuffer, const GLuint * value)
{
   	return FunctionObjects::ClearBufferuiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
   	return FunctionObjects::ClearColorx(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
   	return FunctionObjects::ClearDepth(depth);
}

inline void glClearDepthf(GLfloat d)
{
   	return FunctionObjects::ClearDepthf(d);
}

inline void glClearDepthx(GLfixed depth)
{
   	return FunctionObjects::ClearDepthx(depth);
}

inline void glClearIndex(GLfloat c)
{
   	return FunctionObjects::ClearIndex(c);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline void glClientActiveTexture(gl43::GLenum texture)
{
   	return FunctionObjects::ClientActiveTexture(static_cast<gl::GLenum>(texture));
}

inline GLenum glClientWaitSync(GLsync sync, gl43::GLbitfield flags, GLuint64 timeout)
{
   	return static_cast<gl43::GLenum>(FunctionObjects::ClientWaitSync(sync, static_cast<gl::GLbitfield>(flags), timeout));
}

inline void glClipPlane(gl43::GLenum plane, const GLdouble * equation)
{
   	return FunctionObjects::ClipPlane(static_cast<gl::GLenum>(plane), equation);
}

inline void glClipPlanef(gl43::GLenum p, const GLfloat * eqn)
{
   	return FunctionObjects::ClipPlanef(static_cast<gl::GLenum>(p), eqn);
}

inline void glClipPlanex(gl43::GLenum plane, const GLfixed * equation)
{
   	return FunctionObjects::ClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
   	return FunctionObjects::Color3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
   	return FunctionObjects::Color3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::Color3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
   	return FunctionObjects::Color3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::Color3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
   	return FunctionObjects::Color3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::Color3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
   	return FunctionObjects::Color3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::Color3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
   	return FunctionObjects::Color3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::Color3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::Color3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::Color3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
   	return FunctionObjects::Color3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::Color3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
   	return FunctionObjects::Color3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
   	return FunctionObjects::Color4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
   	return FunctionObjects::Color4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
   	return FunctionObjects::Color4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
   	return FunctionObjects::Color4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::Color4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
   	return FunctionObjects::Color4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
   	return FunctionObjects::Color4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
   	return FunctionObjects::Color4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
   	return FunctionObjects::Color4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
   	return FunctionObjects::Color4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
   	return FunctionObjects::Color4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
   	return FunctionObjects::Color4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
   	return FunctionObjects::Color4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
   	return FunctionObjects::Color4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
   	return FunctionObjects::Color4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
   	return FunctionObjects::Color4usv(v);
}

inline void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
   	return FunctionObjects::Color4x(red, green, blue, alpha);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
   	return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
   	return FunctionObjects::ColorMaski(index, r, g, b, a);
}

inline void glColorMaterial(gl43::GLenum face, gl43::GLenum mode)
{
   	return FunctionObjects::ColorMaterial(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glColorP3ui(gl43::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP3ui(static_cast<gl::GLenum>(type), color);
}

inline void glColorP3uiv(gl43::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP3uiv(static_cast<gl::GLenum>(type), color);
}

inline void glColorP4ui(gl43::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP4ui(static_cast<gl::GLenum>(type), color);
}

inline void glColorP4uiv(gl43::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP4uiv(static_cast<gl::GLenum>(type), color);
}

inline void glColorPointer(GLint size, gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::ColorPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glCompileShader(GLuint shader)
{
   	return FunctionObjects::CompileShader(shader);
}

inline void glCompressedTexImage1D(gl43::GLenum target, GLint level, gl43::GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, border, imageSize, data);
}

inline void glCompressedTexImage2D(gl43::GLenum target, GLint level, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(gl43::GLenum target, GLint level, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(gl43::GLenum target, GLint level, GLint xoffset, GLsizei width, gl43::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage2D(gl43::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl43::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage3D(gl43::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl43::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCopyBufferSubData(gl43::GLenum readTarget, gl43::GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
   	return FunctionObjects::CopyBufferSubData(static_cast<gl::GLenum>(readTarget), static_cast<gl::GLenum>(writeTarget), readOffset, writeOffset, size);
}

inline void glCopyImageSubData(GLuint srcName, gl43::GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, gl43::GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
   	return FunctionObjects::CopyImageSubData(srcName, static_cast<gl::GLenum>(srcTarget), srcLevel, srcX, srcY, srcZ, dstName, static_cast<gl::GLenum>(dstTarget), dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl43::GLenum type)
{
   	return FunctionObjects::CopyPixels(x, y, width, height, static_cast<gl::GLenum>(type));
}

inline void glCopyTexImage1D(gl43::GLenum target, GLint level, gl43::GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, border);
}

inline void glCopyTexImage2D(gl43::GLenum target, GLint level, gl43::GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, height, border);
}

inline void glCopyTexSubImage1D(gl43::GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(gl43::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(gl43::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
   	return FunctionObjects::CreateProgram();
}

inline GLuint glCreateShader(gl43::GLenum type)
{
   	return FunctionObjects::CreateShader(static_cast<gl::GLenum>(type));
}

inline GLuint glCreateShaderProgramv(gl43::GLenum type, GLsizei count, const GLchar *const* strings)
{
   	return FunctionObjects::CreateShaderProgramv(static_cast<gl::GLenum>(type), count, strings);
}

inline void glCullFace(gl43::GLenum mode)
{
   	return FunctionObjects::CullFace(static_cast<gl::GLenum>(mode));
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
   	return FunctionObjects::DebugMessageCallback(callback, userParam);
}

inline void glDebugMessageControl(gl43::GLenum source, gl43::GLenum type, gl43::GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
   	return FunctionObjects::DebugMessageControl(static_cast<gl::GLenum>(source), static_cast<gl::GLenum>(type), static_cast<gl::GLenum>(severity), count, ids, enabled);
}

inline void glDebugMessageInsert(gl43::GLenum source, gl43::GLenum type, GLuint id, gl43::GLenum severity, GLsizei length, const GLchar * buf)
{
   	return FunctionObjects::DebugMessageInsert(static_cast<gl::GLenum>(source), static_cast<gl::GLenum>(type), id, static_cast<gl::GLenum>(severity), length, buf);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
   	return FunctionObjects::DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
   	return FunctionObjects::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
   	return FunctionObjects::DeleteLists(list, range);
}

inline void glDeleteProgram(GLuint program)
{
   	return FunctionObjects::DeleteProgram(program);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
   	return FunctionObjects::DeleteProgramPipelines(n, pipelines);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
   	return FunctionObjects::DeleteRenderbuffers(n, renderbuffers);
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

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
   	return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteTransformFeedbacks(n, ids);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
   	return FunctionObjects::DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(gl43::GLenum func)
{
   	return FunctionObjects::DepthFunc(static_cast<gl::GLenum>(func));
}

inline void glDepthMask(GLboolean flag)
{
   	return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
   	return FunctionObjects::DepthRange(near_, far_);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
   	return FunctionObjects::DepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
   	return FunctionObjects::DepthRangeIndexed(index, n, f);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
   	return FunctionObjects::DepthRangef(n, f);
}

inline void glDepthRangex(GLfixed n, GLfixed f)
{
   	return FunctionObjects::DepthRangex(n, f);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::DetachShader(program, shader);
}

inline void glDisable(gl43::GLenum cap)
{
   	return FunctionObjects::Disable(static_cast<gl::GLenum>(cap));
}

inline void glDisableClientState(gl43::GLenum array)
{
   	return FunctionObjects::DisableClientState(static_cast<gl::GLenum>(array));
}

inline void glDisableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisablei(gl43::GLenum target, GLuint index)
{
   	return FunctionObjects::Disablei(static_cast<gl::GLenum>(target), index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
   	return FunctionObjects::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
   	return FunctionObjects::DispatchComputeIndirect(indirect);
}

inline void glDrawArrays(gl43::GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(static_cast<gl::GLenum>(mode), first, count);
}

inline void glDrawArraysIndirect(gl43::GLenum mode, const void * indirect)
{
   	return FunctionObjects::DrawArraysIndirect(static_cast<gl::GLenum>(mode), indirect);
}

inline void glDrawArraysInstanced(gl43::GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
   	return FunctionObjects::DrawArraysInstanced(static_cast<gl::GLenum>(mode), first, count, instancecount);
}

inline void glDrawArraysInstancedBaseInstance(gl43::GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
   	return FunctionObjects::DrawArraysInstancedBaseInstance(static_cast<gl::GLenum>(mode), first, count, instancecount, baseinstance);
}

inline void glDrawBuffer(gl43::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(static_cast<gl::GLenum>(mode));
}

inline void glDrawBuffers(GLsizei n, const gl43::GLenum * bufs)
{
   	return FunctionObjects::DrawBuffers(n, reinterpret_cast<const gl::GLenum *>(bufs));
}

inline void glDrawElements(gl43::GLenum mode, GLsizei count, gl43::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawElementsBaseVertex(gl43::GLenum mode, GLsizei count, gl43::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawElementsBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, basevertex);
}

inline void glDrawElementsIndirect(gl43::GLenum mode, gl43::GLenum type, const void * indirect)
{
   	return FunctionObjects::DrawElementsIndirect(static_cast<gl::GLenum>(mode), static_cast<gl::GLenum>(type), indirect);
}

inline void glDrawElementsInstanced(gl43::GLenum mode, GLsizei count, gl43::GLenum type, const void * indices, GLsizei instancecount)
{
   	return FunctionObjects::DrawElementsInstanced(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount);
}

inline void glDrawElementsInstancedBaseInstance(gl43::GLenum mode, GLsizei count, gl43::GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
   	return FunctionObjects::DrawElementsInstancedBaseInstance(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(gl43::GLenum mode, GLsizei count, gl43::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(gl43::GLenum mode, GLsizei count, gl43::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertexBaseInstance(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, basevertex, baseinstance);
}

inline void glDrawPixels(GLsizei width, GLsizei height, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::DrawPixels(width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glDrawRangeElements(gl43::GLenum mode, GLuint start, GLuint end, GLsizei count, gl43::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawRangeElementsBaseVertex(gl43::GLenum mode, GLuint start, GLuint end, GLsizei count, gl43::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawRangeElementsBaseVertex(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices, basevertex);
}

inline void glDrawTransformFeedback(gl43::GLenum mode, GLuint id)
{
   	return FunctionObjects::DrawTransformFeedback(static_cast<gl::GLenum>(mode), id);
}

inline void glDrawTransformFeedbackInstanced(gl43::GLenum mode, GLuint id, GLsizei instancecount)
{
   	return FunctionObjects::DrawTransformFeedbackInstanced(static_cast<gl::GLenum>(mode), id, instancecount);
}

inline void glDrawTransformFeedbackStream(gl43::GLenum mode, GLuint id, GLuint stream)
{
   	return FunctionObjects::DrawTransformFeedbackStream(static_cast<gl::GLenum>(mode), id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(gl43::GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
   	return FunctionObjects::DrawTransformFeedbackStreamInstanced(static_cast<gl::GLenum>(mode), id, stream, instancecount);
}

inline void glEdgeFlag(GLboolean flag)
{
   	return FunctionObjects::EdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
   	return FunctionObjects::EdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
   	return FunctionObjects::EdgeFlagv(flag);
}

inline void glEnable(gl43::GLenum cap)
{
   	return FunctionObjects::Enable(static_cast<gl::GLenum>(cap));
}

inline void glEnableClientState(gl43::GLenum array)
{
   	return FunctionObjects::EnableClientState(static_cast<gl::GLenum>(array));
}

inline void glEnableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnablei(gl43::GLenum target, GLuint index)
{
   	return FunctionObjects::Enablei(static_cast<gl::GLenum>(target), index);
}

inline void glEnd()
{
   	return FunctionObjects::End();
}

inline void glEndConditionalRender()
{
   	return FunctionObjects::EndConditionalRender();
}

inline void glEndList()
{
   	return FunctionObjects::EndList();
}

inline void glEndQuery(gl43::GLenum target)
{
   	return FunctionObjects::EndQuery(static_cast<gl::GLenum>(target));
}

inline void glEndQueryIndexed(gl43::GLenum target, GLuint index)
{
   	return FunctionObjects::EndQueryIndexed(static_cast<gl::GLenum>(target), index);
}

inline void glEndTransformFeedback()
{
   	return FunctionObjects::EndTransformFeedback();
}

inline void glEvalCoord1d(GLdouble u)
{
   	return FunctionObjects::EvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
   	return FunctionObjects::EvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
   	return FunctionObjects::EvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
   	return FunctionObjects::EvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord2fv(u);
}

inline void glEvalMesh1(gl43::GLenum mode, GLint i1, GLint i2)
{
   	return FunctionObjects::EvalMesh1(static_cast<gl::GLenum>(mode), i1, i2);
}

inline void glEvalMesh2(gl43::GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
   	return FunctionObjects::EvalMesh2(static_cast<gl::GLenum>(mode), i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
   	return FunctionObjects::EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
   	return FunctionObjects::EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, gl43::GLenum type, GLfloat * buffer)
{
   	return FunctionObjects::FeedbackBuffer(size, static_cast<gl::GLenum>(type), buffer);
}

inline GLsync glFenceSync(gl43::GLenum condition, gl43::GLbitfield flags)
{
   	return FunctionObjects::FenceSync(static_cast<gl::GLenum>(condition), static_cast<gl::GLbitfield>(flags));
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFlushMappedBufferRange(gl43::GLenum target, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::FlushMappedBufferRange(static_cast<gl::GLenum>(target), offset, length);
}

inline void glFogCoordPointer(gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::FogCoordPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
   	return FunctionObjects::FogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
   	return FunctionObjects::FogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
   	return FunctionObjects::FogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
   	return FunctionObjects::FogCoordfv(coord);
}

inline void glFogf(gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Fogf(static_cast<gl::GLenum>(pname), param);
}

inline void glFogfv(gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Fogfv(static_cast<gl::GLenum>(pname), params);
}

inline void glFogi(gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::Fogi(static_cast<gl::GLenum>(pname), param);
}

inline void glFogiv(gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Fogiv(static_cast<gl::GLenum>(pname), params);
}

inline void glFogx(gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Fogx(static_cast<gl::GLenum>(pname), param);
}

inline void glFogxv(gl43::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Fogxv(static_cast<gl::GLenum>(pname), param);
}

inline void glFramebufferParameteri(gl43::GLenum target, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::FramebufferParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glFramebufferRenderbuffer(gl43::GLenum target, gl43::GLenum attachment, gl43::GLenum renderbuffertarget, GLuint renderbuffer)
{
   	return FunctionObjects::FramebufferRenderbuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(renderbuffertarget), renderbuffer);
}

inline void glFramebufferTexture(gl43::GLenum target, gl43::GLenum attachment, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level);
}

inline void glFramebufferTexture1D(gl43::GLenum target, gl43::GLenum attachment, gl43::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture1D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture2D(gl43::GLenum target, gl43::GLenum attachment, gl43::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture2D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture3D(gl43::GLenum target, gl43::GLenum attachment, gl43::GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
   	return FunctionObjects::FramebufferTexture3D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level, zoffset);
}

inline void glFramebufferTextureLayer(gl43::GLenum target, gl43::GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   	return FunctionObjects::FramebufferTextureLayer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level, layer);
}

inline void glFrontFace(gl43::GLenum mode)
{
   	return FunctionObjects::FrontFace(static_cast<gl::GLenum>(mode));
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Frustum(left, right, bottom, top, zNear, zFar);
}

inline void glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Frustumf(l, r, b, t, n, f);
}

inline void glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Frustumx(l, r, b, t, n, f);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
   	return FunctionObjects::GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
   	return FunctionObjects::GenFramebuffers(n, framebuffers);
}

inline GLuint glGenLists(GLsizei range)
{
   	return FunctionObjects::GenLists(range);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
   	return FunctionObjects::GenProgramPipelines(n, pipelines);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
   	return FunctionObjects::GenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
   	return FunctionObjects::GenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
   	return FunctionObjects::GenTextures(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenTransformFeedbacks(n, ids);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
   	return FunctionObjects::GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(gl43::GLenum target)
{
   	return FunctionObjects::GenerateMipmap(static_cast<gl::GLenum>(target));
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveAtomicCounterBufferiv(program, bufferIndex, static_cast<gl::GLenum>(pname), params);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl43::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveSubroutineName(GLuint program, gl43::GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetActiveSubroutineName(program, static_cast<gl::GLenum>(shadertype), index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, gl43::GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetActiveSubroutineUniformName(program, static_cast<gl::GLenum>(shadertype), index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, gl43::GLenum shadertype, GLuint index, gl43::GLenum pname, GLint * values)
{
   	return FunctionObjects::GetActiveSubroutineUniformiv(program, static_cast<gl::GLenum>(shadertype), index, static_cast<gl::GLenum>(pname), values);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl43::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
   	return FunctionObjects::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformBlockiv(program, uniformBlockIndex, static_cast<gl::GLenum>(pname), params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
   	return FunctionObjects::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformsiv(program, uniformCount, uniformIndices, static_cast<gl::GLenum>(pname), params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
   	return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(gl43::GLenum target, GLuint index, GLboolean * data)
{
   	return FunctionObjects::GetBooleani_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetBooleanv(gl43::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetBufferParameteri64v(gl43::GLenum target, gl43::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetBufferParameteri64v(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferParameteriv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetBufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferPointerv(gl43::GLenum target, gl43::GLenum pname, void ** params)
{
   	return FunctionObjects::GetBufferPointerv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferSubData(gl43::GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
   	return FunctionObjects::GetBufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline void glGetClipPlane(gl43::GLenum plane, GLdouble * equation)
{
   	return FunctionObjects::GetClipPlane(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanef(gl43::GLenum plane, GLfloat * equation)
{
   	return FunctionObjects::GetClipPlanef(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanex(gl43::GLenum plane, GLfixed * equation)
{
   	return FunctionObjects::GetClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetCompressedTexImage(gl43::GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(static_cast<gl::GLenum>(target), level, img);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, gl43::GLenum * sources, gl43::GLenum * types, GLuint * ids, gl43::GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
   	return FunctionObjects::GetDebugMessageLog(count, bufSize, reinterpret_cast<gl::GLenum *>(sources), reinterpret_cast<gl::GLenum *>(types), ids, reinterpret_cast<gl::GLenum *>(severities), lengths, messageLog);
}

inline void glGetDoublei_v(gl43::GLenum target, GLuint index, GLdouble * data)
{
   	return FunctionObjects::GetDoublei_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetDoublev(gl43::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(static_cast<gl::GLenum>(pname), data);
}

inline GLenum glGetError()
{
   	return static_cast<gl43::GLenum>(FunctionObjects::GetError());
}

inline void glGetFixedv(gl43::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetFixedv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetFloati_v(gl43::GLenum target, GLuint index, GLfloat * data)
{
   	return FunctionObjects::GetFloati_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetFloatv(gl43::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(static_cast<gl::GLenum>(pname), data);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(gl43::GLenum target, gl43::GLenum attachment, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferAttachmentParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(pname), params);
}

inline void glGetFramebufferParameteriv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetInteger64i_v(gl43::GLenum target, GLuint index, GLint64 * data)
{
   	return FunctionObjects::GetInteger64i_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetInteger64v(gl43::GLenum pname, GLint64 * data)
{
   	return FunctionObjects::GetInteger64v(static_cast<gl::GLenum>(pname), data);
}

inline void glGetIntegeri_v(gl43::GLenum target, GLuint index, GLint * data)
{
   	return FunctionObjects::GetIntegeri_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetIntegerv(gl43::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetInternalformati64v(gl43::GLenum target, gl43::GLenum internalformat, gl43::GLenum pname, GLsizei bufSize, GLint64 * params)
{
   	return FunctionObjects::GetInternalformati64v(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), static_cast<gl::GLenum>(pname), bufSize, params);
}

inline void glGetInternalformativ(gl43::GLenum target, gl43::GLenum internalformat, gl43::GLenum pname, GLsizei bufSize, GLint * params)
{
   	return FunctionObjects::GetInternalformativ(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), static_cast<gl::GLenum>(pname), bufSize, params);
}

inline void glGetLightfv(gl43::GLenum light, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetLightfv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetLightiv(gl43::GLenum light, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetLightiv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetLightxv(gl43::GLenum light, gl43::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetLightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMapdv(gl43::GLenum target, gl43::GLenum query, GLdouble * v)
{
   	return FunctionObjects::GetMapdv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMapfv(gl43::GLenum target, gl43::GLenum query, GLfloat * v)
{
   	return FunctionObjects::GetMapfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMapiv(gl43::GLenum target, gl43::GLenum query, GLint * v)
{
   	return FunctionObjects::GetMapiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMaterialfv(gl43::GLenum face, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetMaterialfv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialiv(gl43::GLenum face, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetMaterialiv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialxv(gl43::GLenum face, gl43::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetMaterialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMultisamplefv(gl43::GLenum pname, GLuint index, GLfloat * val)
{
   	return FunctionObjects::GetMultisamplefv(static_cast<gl::GLenum>(pname), index, val);
}

inline void glGetObjectLabel(gl43::GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
   	return FunctionObjects::GetObjectLabel(static_cast<gl::GLenum>(identifier), name, bufSize, length, label);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
   	return FunctionObjects::GetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetPixelMapfv(gl43::GLenum map, GLfloat * values)
{
   	return FunctionObjects::GetPixelMapfv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPixelMapuiv(gl43::GLenum map, GLuint * values)
{
   	return FunctionObjects::GetPixelMapuiv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPixelMapusv(gl43::GLenum map, GLushort * values)
{
   	return FunctionObjects::GetPixelMapusv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPointerv(gl43::GLenum pname, void ** params)
{
   	return FunctionObjects::GetPointerv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
   	return FunctionObjects::GetPolygonStipple(mask);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, gl43::GLenum * binaryFormat, void * binary)
{
   	return FunctionObjects::GetProgramBinary(program, bufSize, length, reinterpret_cast<gl::GLenum *>(binaryFormat), binary);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramInterfaceiv(GLuint program, gl43::GLenum programInterface, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramInterfaceiv(program, static_cast<gl::GLenum>(programInterface), static_cast<gl::GLenum>(pname), params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramPipelineiv(pipeline, static_cast<gl::GLenum>(pname), params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, gl43::GLenum programInterface, const GLchar * name)
{
   	return FunctionObjects::GetProgramResourceIndex(program, static_cast<gl::GLenum>(programInterface), name);
}

inline GLint glGetProgramResourceLocation(GLuint program, gl43::GLenum programInterface, const GLchar * name)
{
   	return FunctionObjects::GetProgramResourceLocation(program, static_cast<gl::GLenum>(programInterface), name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, gl43::GLenum programInterface, const GLchar * name)
{
   	return FunctionObjects::GetProgramResourceLocationIndex(program, static_cast<gl::GLenum>(programInterface), name);
}

inline void glGetProgramResourceName(GLuint program, gl43::GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetProgramResourceName(program, static_cast<gl::GLenum>(programInterface), index, bufSize, length, name);
}

inline void glGetProgramResourceiv(GLuint program, gl43::GLenum programInterface, GLuint index, GLsizei propCount, const gl43::GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
   	return FunctionObjects::GetProgramResourceiv(program, static_cast<gl::GLenum>(programInterface), index, propCount, reinterpret_cast<const gl::GLenum *>(props), bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, gl43::GLenum shadertype, gl43::GLenum pname, GLint * values)
{
   	return FunctionObjects::GetProgramStageiv(program, static_cast<gl::GLenum>(shadertype), static_cast<gl::GLenum>(pname), values);
}

inline void glGetProgramiv(GLuint program, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramiv(program, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryIndexediv(gl43::GLenum target, GLuint index, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryIndexediv(static_cast<gl::GLenum>(target), index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjecti64v(GLuint id, gl43::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetQueryObjecti64v(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectiv(GLuint id, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryObjectiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectui64v(GLuint id, gl43::GLenum pname, GLuint64 * params)
{
   	return FunctionObjects::GetQueryObjectui64v(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectuiv(GLuint id, gl43::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetQueryObjectuiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryiv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetRenderbufferParameteriv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetRenderbufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameterIiv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, gl43::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetSamplerParameterIuiv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterfv(GLuint sampler, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetSamplerParameterfv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameteriv(GLuint sampler, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameteriv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderPrecisionFormat(gl43::GLenum shadertype, gl43::GLenum precisiontype, GLint * range, GLint * precision)
{
   	return FunctionObjects::GetShaderPrecisionFormat(static_cast<gl::GLenum>(shadertype), static_cast<gl::GLenum>(precisiontype), range, precision);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
   	return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetShaderiv(shader, static_cast<gl::GLenum>(pname), params);
}

inline const GLubyte * glGetString(gl43::GLenum name)
{
   	return FunctionObjects::GetString(static_cast<gl::GLenum>(name));
}

inline const GLubyte * glGetStringi(gl43::GLenum name, GLuint index)
{
   	return FunctionObjects::GetStringi(static_cast<gl::GLenum>(name), index);
}

inline GLuint glGetSubroutineIndex(GLuint program, gl43::GLenum shadertype, const GLchar * name)
{
   	return FunctionObjects::GetSubroutineIndex(program, static_cast<gl::GLenum>(shadertype), name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, gl43::GLenum shadertype, const GLchar * name)
{
   	return FunctionObjects::GetSubroutineUniformLocation(program, static_cast<gl::GLenum>(shadertype), name);
}

inline void glGetSynciv(GLsync sync, gl43::GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
   	return FunctionObjects::GetSynciv(sync, static_cast<gl::GLenum>(pname), bufSize, length, values);
}

inline void glGetTexEnvfv(gl43::GLenum target, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexEnvfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexEnviv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexEnviv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexEnvxv(gl43::GLenum target, gl43::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGendv(gl43::GLenum coord, gl43::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetTexGendv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGenfv(gl43::GLenum coord, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexGenfv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGeniv(gl43::GLenum coord, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexGeniv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexImage(gl43::GLenum target, GLint level, gl43::GLenum format, gl43::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glGetTexLevelParameterfv(gl43::GLenum target, GLint level, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexLevelParameteriv(gl43::GLenum target, GLint level, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIiv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIuiv(gl43::GLenum target, gl43::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetTexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterfv(gl43::GLenum target, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameteriv(gl43::GLenum target, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterxv(gl43::GLenum target, gl43::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, gl43::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
   	return FunctionObjects::GetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
   	return FunctionObjects::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetUniformLocation(program, name);
}

inline void glGetUniformSubroutineuiv(gl43::GLenum shadertype, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformSubroutineuiv(static_cast<gl::GLenum>(shadertype), location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
   	return FunctionObjects::GetUniformdv(program, location, params);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
   	return FunctionObjects::GetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
   	return FunctionObjects::GetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribIiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribIuiv(GLuint index, gl43::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetVertexAttribIuiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribLdv(GLuint index, gl43::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribLdv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribPointerv(GLuint index, gl43::GLenum pname, void ** pointer)
{
   	return FunctionObjects::GetVertexAttribPointerv(index, static_cast<gl::GLenum>(pname), pointer);
}

inline void glGetVertexAttribdv(GLuint index, gl43::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribdv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribfv(GLuint index, gl43::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetVertexAttribfv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribiv(GLuint index, gl43::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glHint(gl43::GLenum target, gl43::GLenum mode)
{
   	return FunctionObjects::Hint(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(mode));
}

inline void glIndexMask(GLuint mask)
{
   	return FunctionObjects::IndexMask(mask);
}

inline void glIndexPointer(gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::IndexPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glIndexd(GLdouble c)
{
   	return FunctionObjects::Indexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
   	return FunctionObjects::Indexdv(c);
}

inline void glIndexf(GLfloat c)
{
   	return FunctionObjects::Indexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
   	return FunctionObjects::Indexfv(c);
}

inline void glIndexi(GLint c)
{
   	return FunctionObjects::Indexi(c);
}

inline void glIndexiv(const GLint * c)
{
   	return FunctionObjects::Indexiv(c);
}

inline void glIndexs(GLshort c)
{
   	return FunctionObjects::Indexs(c);
}

inline void glIndexsv(const GLshort * c)
{
   	return FunctionObjects::Indexsv(c);
}

inline void glIndexub(GLubyte c)
{
   	return FunctionObjects::Indexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
   	return FunctionObjects::Indexubv(c);
}

inline void glInitNames()
{
   	return FunctionObjects::InitNames();
}

inline void glInterleavedArrays(gl43::GLenum format, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::InterleavedArrays(static_cast<gl::GLenum>(format), stride, pointer);
}

inline void glInvalidateBufferData(GLuint buffer)
{
   	return FunctionObjects::InvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::InvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(gl43::GLenum target, GLsizei numAttachments, const gl43::GLenum * attachments)
{
   	return FunctionObjects::InvalidateFramebuffer(static_cast<gl::GLenum>(target), numAttachments, reinterpret_cast<const gl::GLenum *>(attachments));
}

inline void glInvalidateSubFramebuffer(gl43::GLenum target, GLsizei numAttachments, const gl43::GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::InvalidateSubFramebuffer(static_cast<gl::GLenum>(target), numAttachments, reinterpret_cast<const gl::GLenum *>(attachments), x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
   	return FunctionObjects::InvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
   	return FunctionObjects::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
   	return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(gl43::GLenum cap)
{
   	return FunctionObjects::IsEnabled(static_cast<gl::GLenum>(cap));
}

inline GLboolean glIsEnabledi(gl43::GLenum target, GLuint index)
{
   	return FunctionObjects::IsEnabledi(static_cast<gl::GLenum>(target), index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
   	return FunctionObjects::IsFramebuffer(framebuffer);
}

inline GLboolean glIsList(GLuint list)
{
   	return FunctionObjects::IsList(list);
}

inline GLboolean glIsProgram(GLuint program)
{
   	return FunctionObjects::IsProgram(program);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::IsProgramPipeline(pipeline);
}

inline GLboolean glIsQuery(GLuint id)
{
   	return FunctionObjects::IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
   	return FunctionObjects::IsRenderbuffer(renderbuffer);
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

inline GLboolean glIsTexture(GLuint texture)
{
   	return FunctionObjects::IsTexture(texture);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
   	return FunctionObjects::IsTransformFeedback(id);
}

inline GLboolean glIsVertexArray(GLuint array)
{
   	return FunctionObjects::IsVertexArray(array);
}

inline void glLightModelf(gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::LightModelf(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelfv(gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::LightModelfv(static_cast<gl::GLenum>(pname), params);
}

inline void glLightModeli(gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::LightModeli(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModeliv(gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::LightModeliv(static_cast<gl::GLenum>(pname), params);
}

inline void glLightModelx(gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::LightModelx(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelxv(gl43::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::LightModelxv(static_cast<gl::GLenum>(pname), param);
}

inline void glLightf(gl43::GLenum light, gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Lightf(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightfv(gl43::GLenum light, gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Lightfv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLighti(gl43::GLenum light, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::Lighti(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightiv(gl43::GLenum light, gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Lightiv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLightx(gl43::GLenum light, gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Lightx(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightxv(gl43::GLenum light, gl43::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::Lightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
   	return FunctionObjects::LineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
   	return FunctionObjects::LineWidth(width);
}

inline void glLineWidthx(GLfixed width)
{
   	return FunctionObjects::LineWidthx(width);
}

inline void glLinkProgram(GLuint program)
{
   	return FunctionObjects::LinkProgram(program);
}

inline void glListBase(GLuint base)
{
   	return FunctionObjects::ListBase(base);
}

inline void glLoadIdentity()
{
   	return FunctionObjects::LoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadMatrixf(m);
}

inline void glLoadMatrixx(const GLfixed * m)
{
   	return FunctionObjects::LoadMatrixx(m);
}

inline void glLoadName(GLuint name)
{
   	return FunctionObjects::LoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadTransposeMatrixf(m);
}

inline void glLogicOp(gl43::GLenum opcode)
{
   	return FunctionObjects::LogicOp(static_cast<gl::GLenum>(opcode));
}

inline void glMap1d(gl43::GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
   	return FunctionObjects::Map1d(static_cast<gl::GLenum>(target), u1, u2, stride, order, points);
}

inline void glMap1f(gl43::GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
   	return FunctionObjects::Map1f(static_cast<gl::GLenum>(target), u1, u2, stride, order, points);
}

inline void glMap2d(gl43::GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
   	return FunctionObjects::Map2d(static_cast<gl::GLenum>(target), u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(gl43::GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
   	return FunctionObjects::Map2f(static_cast<gl::GLenum>(target), u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBuffer(gl43::GLenum target, gl43::GLenum access)
{
   	return FunctionObjects::MapBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(access));
}

inline void * glMapBufferRange(gl43::GLenum target, GLintptr offset, GLsizeiptr length, gl43::GLbitfield access)
{
   	return FunctionObjects::MapBufferRange(static_cast<gl::GLenum>(target), offset, length, static_cast<gl::GLbitfield>(access));
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
   	return FunctionObjects::MapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
   	return FunctionObjects::MapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::MapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::MapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(gl43::GLenum face, gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Materialf(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialfv(gl43::GLenum face, gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Materialfv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glMateriali(gl43::GLenum face, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::Materiali(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialiv(gl43::GLenum face, gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Materialiv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glMaterialx(gl43::GLenum face, gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Materialx(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialxv(gl43::GLenum face, gl43::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Materialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMatrixMode(gl43::GLenum mode)
{
   	return FunctionObjects::MatrixMode(static_cast<gl::GLenum>(mode));
}

inline void glMemoryBarrier(gl43::GLbitfield barriers)
{
   	return FunctionObjects::MemoryBarrier(static_cast<gl::GLbitfield>(barriers));
}

inline void glMemoryBarrierByRegion(gl43::GLbitfield barriers)
{
   	return FunctionObjects::MemoryBarrierByRegion(static_cast<gl::GLbitfield>(barriers));
}

inline void glMinSampleShading(GLfloat value)
{
   	return FunctionObjects::MinSampleShading(value);
}

inline void glMultMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultMatrixf(m);
}

inline void glMultMatrixx(const GLfixed * m)
{
   	return FunctionObjects::MultMatrixx(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultTransposeMatrixf(m);
}

inline void glMultiDrawArrays(gl43::GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(static_cast<gl::GLenum>(mode), first, count, drawcount);
}

inline void glMultiDrawArraysIndirect(gl43::GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
   	return FunctionObjects::MultiDrawArraysIndirect(static_cast<gl::GLenum>(mode), indirect, drawcount, stride);
}

inline void glMultiDrawElements(gl43::GLenum mode, const GLsizei * count, gl43::GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(gl43::GLenum mode, const GLsizei * count, gl43::GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
   	return FunctionObjects::MultiDrawElementsBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount, basevertex);
}

inline void glMultiDrawElementsIndirect(gl43::GLenum mode, gl43::GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
   	return FunctionObjects::MultiDrawElementsIndirect(static_cast<gl::GLenum>(mode), static_cast<gl::GLenum>(type), indirect, drawcount, stride);
}

inline void glMultiTexCoord1d(gl43::GLenum target, GLdouble s)
{
   	return FunctionObjects::MultiTexCoord1d(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1dv(gl43::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord1dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1f(gl43::GLenum target, GLfloat s)
{
   	return FunctionObjects::MultiTexCoord1f(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1fv(gl43::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord1fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1i(gl43::GLenum target, GLint s)
{
   	return FunctionObjects::MultiTexCoord1i(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1iv(gl43::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord1iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1s(gl43::GLenum target, GLshort s)
{
   	return FunctionObjects::MultiTexCoord1s(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1sv(gl43::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord1sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2d(gl43::GLenum target, GLdouble s, GLdouble t)
{
   	return FunctionObjects::MultiTexCoord2d(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2dv(gl43::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord2dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2f(gl43::GLenum target, GLfloat s, GLfloat t)
{
   	return FunctionObjects::MultiTexCoord2f(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2fv(gl43::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord2fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2i(gl43::GLenum target, GLint s, GLint t)
{
   	return FunctionObjects::MultiTexCoord2i(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2iv(gl43::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord2iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2s(gl43::GLenum target, GLshort s, GLshort t)
{
   	return FunctionObjects::MultiTexCoord2s(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2sv(gl43::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord2sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3d(gl43::GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::MultiTexCoord3d(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3dv(gl43::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord3dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3f(gl43::GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::MultiTexCoord3f(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3fv(gl43::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord3fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3i(gl43::GLenum target, GLint s, GLint t, GLint r)
{
   	return FunctionObjects::MultiTexCoord3i(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3iv(gl43::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord3iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3s(gl43::GLenum target, GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::MultiTexCoord3s(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3sv(gl43::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord3sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4d(gl43::GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::MultiTexCoord4d(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4dv(gl43::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord4dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4f(gl43::GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::MultiTexCoord4f(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4fv(gl43::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord4fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4i(gl43::GLenum target, GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::MultiTexCoord4i(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4iv(gl43::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord4iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4s(gl43::GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::MultiTexCoord4s(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4sv(gl43::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord4sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4x(gl43::GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
   	return FunctionObjects::MultiTexCoord4x(static_cast<gl::GLenum>(texture), s, t, r, q);
}

inline void glMultiTexCoordP1ui(gl43::GLenum texture, gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP1ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP1uiv(gl43::GLenum texture, gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP1uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP2ui(gl43::GLenum texture, gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP2ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP2uiv(gl43::GLenum texture, gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP2uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP3ui(gl43::GLenum texture, gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP3ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP3uiv(gl43::GLenum texture, gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP3uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP4ui(gl43::GLenum texture, gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP4ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP4uiv(gl43::GLenum texture, gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP4uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glNewList(GLuint list, gl43::GLenum mode)
{
   	return FunctionObjects::NewList(list, static_cast<gl::GLenum>(mode));
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
   	return FunctionObjects::Normal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
   	return FunctionObjects::Normal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
   	return FunctionObjects::Normal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
   	return FunctionObjects::Normal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
   	return FunctionObjects::Normal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
   	return FunctionObjects::Normal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
   	return FunctionObjects::Normal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
   	return FunctionObjects::Normal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
   	return FunctionObjects::Normal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
   	return FunctionObjects::Normal3sv(v);
}

inline void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
   	return FunctionObjects::Normal3x(nx, ny, nz);
}

inline void glNormalP3ui(gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::NormalP3ui(static_cast<gl::GLenum>(type), coords);
}

inline void glNormalP3uiv(gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::NormalP3uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glNormalPointer(gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::NormalPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glObjectLabel(gl43::GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
   	return FunctionObjects::ObjectLabel(static_cast<gl::GLenum>(identifier), name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
   	return FunctionObjects::ObjectPtrLabel(ptr, length, label);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Ortho(left, right, bottom, top, zNear, zFar);
}

inline void glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Orthof(l, r, b, t, n, f);
}

inline void glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Orthox(l, r, b, t, n, f);
}

inline void glPassThrough(GLfloat token)
{
   	return FunctionObjects::PassThrough(token);
}

inline void glPatchParameterfv(gl43::GLenum pname, const GLfloat * values)
{
   	return FunctionObjects::PatchParameterfv(static_cast<gl::GLenum>(pname), values);
}

inline void glPatchParameteri(gl43::GLenum pname, GLint value)
{
   	return FunctionObjects::PatchParameteri(static_cast<gl::GLenum>(pname), value);
}

inline void glPauseTransformFeedback()
{
   	return FunctionObjects::PauseTransformFeedback();
}

inline void glPixelMapfv(gl43::GLenum map, GLsizei mapsize, const GLfloat * values)
{
   	return FunctionObjects::PixelMapfv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelMapuiv(gl43::GLenum map, GLsizei mapsize, const GLuint * values)
{
   	return FunctionObjects::PixelMapuiv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelMapusv(gl43::GLenum map, GLsizei mapsize, const GLushort * values)
{
   	return FunctionObjects::PixelMapusv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelStoref(gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelStorei(gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelTransferf(gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelTransferf(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelTransferi(gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelTransferi(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
   	return FunctionObjects::PixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterfv(gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameteri(gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameteriv(gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameterx(gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::PointParameterx(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterxv(gl43::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::PointParameterxv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPointSizex(GLfixed size)
{
   	return FunctionObjects::PointSizex(size);
}

inline void glPolygonMode(gl43::GLenum face, gl43::GLenum mode)
{
   	return FunctionObjects::PolygonMode(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
   	return FunctionObjects::PolygonOffset(factor, units);
}

inline void glPolygonOffsetx(GLfixed factor, GLfixed units)
{
   	return FunctionObjects::PolygonOffsetx(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
   	return FunctionObjects::PolygonStipple(mask);
}

inline void glPopAttrib()
{
   	return FunctionObjects::PopAttrib();
}

inline void glPopClientAttrib()
{
   	return FunctionObjects::PopClientAttrib();
}

inline void glPopDebugGroup()
{
   	return FunctionObjects::PopDebugGroup();
}

inline void glPopMatrix()
{
   	return FunctionObjects::PopMatrix();
}

inline void glPopName()
{
   	return FunctionObjects::PopName();
}

inline void glPrimitiveRestartIndex(GLuint index)
{
   	return FunctionObjects::PrimitiveRestartIndex(index);
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
   	return FunctionObjects::PrioritizeTextures(n, textures, priorities);
}

inline void glProgramBinary(GLuint program, gl43::GLenum binaryFormat, const void * binary, GLsizei length)
{
   	return FunctionObjects::ProgramBinary(program, static_cast<gl::GLenum>(binaryFormat), binary, length);
}

inline void glProgramParameteri(GLuint program, gl43::GLenum pname, GLint value)
{
   	return FunctionObjects::ProgramParameteri(program, static_cast<gl::GLenum>(pname), value);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
   	return FunctionObjects::ProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
   	return FunctionObjects::ProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
   	return FunctionObjects::ProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
   	return FunctionObjects::ProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
   	return FunctionObjects::ProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
   	return FunctionObjects::ProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::ProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::ProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::ProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::ProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::ProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::ProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
   	return FunctionObjects::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
   	return FunctionObjects::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProvokingVertex(gl43::GLenum mode)
{
   	return FunctionObjects::ProvokingVertex(static_cast<gl::GLenum>(mode));
}

inline void glPushAttrib(gl43::GLbitfield mask)
{
   	return FunctionObjects::PushAttrib(static_cast<gl::GLbitfield>(mask));
}

inline void glPushClientAttrib(gl43::GLbitfield mask)
{
   	return FunctionObjects::PushClientAttrib(static_cast<gl::GLbitfield>(mask));
}

inline void glPushDebugGroup(gl43::GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
   	return FunctionObjects::PushDebugGroup(static_cast<gl::GLenum>(source), id, length, message);
}

inline void glPushMatrix()
{
   	return FunctionObjects::PushMatrix();
}

inline void glPushName(GLuint name)
{
   	return FunctionObjects::PushName(name);
}

inline void glQueryCounter(GLuint id, gl43::GLenum target)
{
   	return FunctionObjects::QueryCounter(id, static_cast<gl::GLenum>(target));
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::RasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::RasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
   	return FunctionObjects::RasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
   	return FunctionObjects::RasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::RasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::RasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::RasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::RasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
   	return FunctionObjects::RasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::RasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::RasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::RasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::RasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
   	return FunctionObjects::RasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::RasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos4sv(v);
}

inline void glReadBuffer(gl43::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(static_cast<gl::GLenum>(mode));
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl43::GLenum format, gl43::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
   	return FunctionObjects::Rectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
   	return FunctionObjects::Rectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
   	return FunctionObjects::Rectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
   	return FunctionObjects::Rectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
   	return FunctionObjects::Recti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
   	return FunctionObjects::Rectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
   	return FunctionObjects::Rects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
   	return FunctionObjects::Rectsv(v1, v2);
}

inline void glReleaseShaderCompiler()
{
   	return FunctionObjects::ReleaseShaderCompiler();
}

inline GLint glRenderMode(gl43::GLenum mode)
{
   	return FunctionObjects::RenderMode(static_cast<gl::GLenum>(mode));
}

inline void glRenderbufferStorage(gl43::GLenum target, gl43::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorage(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glRenderbufferStorageMultisample(gl43::GLenum target, GLsizei samples, gl43::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorageMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glResumeTransformFeedback()
{
   	return FunctionObjects::ResumeTransformFeedback();
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Rotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Rotatef(angle, x, y, z);
}

inline void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Rotatex(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
   	return FunctionObjects::SampleCoverage(value, invert);
}

inline void glSampleCoveragex(GLclampx value, GLboolean invert)
{
   	return FunctionObjects::SampleCoveragex(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, gl43::GLbitfield mask)
{
   	return FunctionObjects::SampleMaski(maskNumber, static_cast<gl::GLbitfield>(mask));
}

inline void glSamplerParameterIiv(GLuint sampler, gl43::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameterIiv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterIuiv(GLuint sampler, gl43::GLenum pname, const GLuint * param)
{
   	return FunctionObjects::SamplerParameterIuiv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterf(GLuint sampler, gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::SamplerParameterf(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterfv(GLuint sampler, gl43::GLenum pname, const GLfloat * param)
{
   	return FunctionObjects::SamplerParameterfv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameteri(GLuint sampler, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::SamplerParameteri(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameteriv(GLuint sampler, gl43::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameteriv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Scaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Scalef(x, y, z);
}

inline void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Scalex(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
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

inline void glSecondaryColor3bv(const GLbyte * v)
{
   	return FunctionObjects::SecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::SecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
   	return FunctionObjects::SecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::SecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
   	return FunctionObjects::SecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::SecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
   	return FunctionObjects::SecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::SecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
   	return FunctionObjects::SecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::SecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::SecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::SecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
   	return FunctionObjects::SecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::SecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
   	return FunctionObjects::SecondaryColor3usv(v);
}

inline void glSecondaryColorP3ui(gl43::GLenum type, GLuint color)
{
   	return FunctionObjects::SecondaryColorP3ui(static_cast<gl::GLenum>(type), color);
}

inline void glSecondaryColorP3uiv(gl43::GLenum type, const GLuint * color)
{
   	return FunctionObjects::SecondaryColorP3uiv(static_cast<gl::GLenum>(type), color);
}

inline void glSecondaryColorPointer(GLint size, gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::SecondaryColorPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
   	return FunctionObjects::SelectBuffer(size, buffer);
}

inline void glShadeModel(gl43::GLenum mode)
{
   	return FunctionObjects::ShadeModel(static_cast<gl::GLenum>(mode));
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, gl43::GLenum binaryformat, const void * binary, GLsizei length)
{
   	return FunctionObjects::ShaderBinary(count, shaders, static_cast<gl::GLenum>(binaryformat), binary, length);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
   	return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
   	return FunctionObjects::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glStencilFunc(gl43::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilFuncSeparate(gl43::GLenum face, gl43::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFuncSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilMaskSeparate(gl43::GLenum face, GLuint mask)
{
   	return FunctionObjects::StencilMaskSeparate(static_cast<gl::GLenum>(face), mask);
}

inline void glStencilOp(gl43::GLenum fail, gl43::GLenum zfail, gl43::GLenum zpass)
{
   	return FunctionObjects::StencilOp(static_cast<gl::GLenum>(fail), static_cast<gl::GLenum>(zfail), static_cast<gl::GLenum>(zpass));
}

inline void glStencilOpSeparate(gl43::GLenum face, gl43::GLenum sfail, gl43::GLenum dpfail, gl43::GLenum dppass)
{
   	return FunctionObjects::StencilOpSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(sfail), static_cast<gl::GLenum>(dpfail), static_cast<gl::GLenum>(dppass));
}

inline void glTexBuffer(gl43::GLenum target, gl43::GLenum internalformat, GLuint buffer)
{
   	return FunctionObjects::TexBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), buffer);
}

inline void glTexBufferRange(gl43::GLenum target, gl43::GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::TexBufferRange(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), buffer, offset, size);
}

inline void glTexCoord1d(GLdouble s)
{
   	return FunctionObjects::TexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
   	return FunctionObjects::TexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
   	return FunctionObjects::TexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
   	return FunctionObjects::TexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
   	return FunctionObjects::TexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
   	return FunctionObjects::TexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
   	return FunctionObjects::TexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
   	return FunctionObjects::TexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
   	return FunctionObjects::TexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
   	return FunctionObjects::TexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::TexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::TexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
   	return FunctionObjects::TexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
   	return FunctionObjects::TexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::TexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::TexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::TexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::TexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
   	return FunctionObjects::TexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::TexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord4sv(v);
}

inline void glTexCoordP1ui(gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP1ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP1uiv(gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP1uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP2ui(gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP2ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP2uiv(gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP2uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP3ui(gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP3ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP3uiv(gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP3uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP4ui(gl43::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP4ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP4uiv(gl43::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP4uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordPointer(GLint size, gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::TexCoordPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glTexEnvf(gl43::GLenum target, gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexEnvf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvfv(gl43::GLenum target, gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexEnvfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexEnvi(gl43::GLenum target, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::TexEnvi(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnviv(gl43::GLenum target, gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexEnviv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexEnvx(gl43::GLenum target, gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexEnvx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvxv(gl43::GLenum target, gl43::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGend(gl43::GLenum coord, gl43::GLenum pname, GLdouble param)
{
   	return FunctionObjects::TexGend(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGendv(gl43::GLenum coord, gl43::GLenum pname, const GLdouble * params)
{
   	return FunctionObjects::TexGendv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGenf(gl43::GLenum coord, gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexGenf(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGenfv(gl43::GLenum coord, gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexGenfv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGeni(gl43::GLenum coord, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::TexGeni(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGeniv(gl43::GLenum coord, gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexGeniv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexImage1D(gl43::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(static_cast<gl::GLenum>(target), level, internalformat, width, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2D(gl43::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(static_cast<gl::GLenum>(target), level, internalformat, width, height, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2DMultisample(gl43::GLenum target, GLsizei samples, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage2DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, fixedsamplelocations);
}

inline void glTexImage3D(gl43::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(static_cast<gl::GLenum>(target), level, internalformat, width, height, depth, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage3DMultisample(gl43::GLenum target, GLsizei samples, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage3DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, depth, fixedsamplelocations);
}

inline void glTexParameterIiv(gl43::GLenum target, gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterIuiv(gl43::GLenum target, gl43::GLenum pname, const GLuint * params)
{
   	return FunctionObjects::TexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterf(gl43::GLenum target, gl43::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterfv(gl43::GLenum target, gl43::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameteri(gl43::GLenum target, gl43::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameteriv(gl43::GLenum target, gl43::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterx(gl43::GLenum target, gl43::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexParameterx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterxv(gl43::GLenum target, gl43::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexStorage1D(gl43::GLenum target, GLsizei levels, gl43::GLenum internalformat, GLsizei width)
{
   	return FunctionObjects::TexStorage1D(static_cast<gl::GLenum>(target), levels, static_cast<gl::GLenum>(internalformat), width);
}

inline void glTexStorage2D(gl43::GLenum target, GLsizei levels, gl43::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::TexStorage2D(static_cast<gl::GLenum>(target), levels, static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glTexStorage2DMultisample(gl43::GLenum target, GLsizei samples, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexStorage2DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, fixedsamplelocations);
}

inline void glTexStorage3D(gl43::GLenum target, GLsizei levels, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
   	return FunctionObjects::TexStorage3D(static_cast<gl::GLenum>(target), levels, static_cast<gl::GLenum>(internalformat), width, height, depth);
}

inline void glTexStorage3DMultisample(gl43::GLenum target, GLsizei samples, gl43::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexStorage3DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, depth, fixedsamplelocations);
}

inline void glTexSubImage1D(gl43::GLenum target, GLint level, GLint xoffset, GLsizei width, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage2D(gl43::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage3D(gl43::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl43::GLenum format, gl43::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTextureView(GLuint texture, gl43::GLenum target, GLuint origtexture, gl43::GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
   	return FunctionObjects::TextureView(texture, static_cast<gl::GLenum>(target), origtexture, static_cast<gl::GLenum>(internalformat), minlevel, numlevels, minlayer, numlayers);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, gl43::GLenum bufferMode)
{
   	return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, static_cast<gl::GLenum>(bufferMode));
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Translated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Translatef(x, y, z);
}

inline void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Translatex(x, y, z);
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

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
   	return FunctionObjects::Uniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
   	return FunctionObjects::Uniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform1uiv(location, count, value);
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

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::Uniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::Uniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform2uiv(location, count, value);
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

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::Uniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform3uiv(location, count, value);
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

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform4uiv(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
   	return FunctionObjects::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2fv(location, count, transpose, value);
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

inline void glUniformSubroutinesuiv(gl43::GLenum shadertype, GLsizei count, const GLuint * indices)
{
   	return FunctionObjects::UniformSubroutinesuiv(static_cast<gl::GLenum>(shadertype), count, indices);
}

inline GLboolean glUnmapBuffer(gl43::GLenum target)
{
   	return FunctionObjects::UnmapBuffer(static_cast<gl::GLenum>(target));
}

inline void glUseProgram(GLuint program)
{
   	return FunctionObjects::UseProgram(program);
}

inline void glUseProgramStages(GLuint pipeline, gl43::GLbitfield stages, GLuint program)
{
   	return FunctionObjects::UseProgramStages(pipeline, static_cast<gl::GLbitfield>(stages), program);
}

inline void glValidateProgram(GLuint program)
{
   	return FunctionObjects::ValidateProgram(program);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::ValidateProgramPipeline(pipeline);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::Vertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::Vertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
   	return FunctionObjects::Vertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
   	return FunctionObjects::Vertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
   	return FunctionObjects::Vertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
   	return FunctionObjects::Vertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Vertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Vertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::Vertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
   	return FunctionObjects::Vertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::Vertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
   	return FunctionObjects::Vertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::Vertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::Vertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::Vertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
   	return FunctionObjects::Vertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::Vertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
   	return FunctionObjects::Vertex4sv(v);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
   	return FunctionObjects::VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
   	return FunctionObjects::VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
   	return FunctionObjects::VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
   	return FunctionObjects::VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
   	return FunctionObjects::VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4usv(index, v);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
   	return FunctionObjects::VertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
   	return FunctionObjects::VertexAttribDivisor(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, gl43::GLenum type, GLboolean normalized, GLuint relativeoffset)
{
   	return FunctionObjects::VertexAttribFormat(attribindex, size, static_cast<gl::GLenum>(type), normalized, relativeoffset);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
   	return FunctionObjects::VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
   	return FunctionObjects::VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
   	return FunctionObjects::VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
   	return FunctionObjects::VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
   	return FunctionObjects::VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
   	return FunctionObjects::VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
   	return FunctionObjects::VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttribI4usv(index, v);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, gl43::GLenum type, GLuint relativeoffset)
{
   	return FunctionObjects::VertexAttribIFormat(attribindex, size, static_cast<gl::GLenum>(type), relativeoffset);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribIPointer(index, size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttribL1d(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL1dv(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL2dv(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL3dv(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL4dv(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, gl43::GLenum type, GLuint relativeoffset)
{
   	return FunctionObjects::VertexAttribLFormat(attribindex, size, static_cast<gl::GLenum>(type), relativeoffset);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribLPointer(index, size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, gl43::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP1ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, gl43::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP1uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, gl43::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP2ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, gl43::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP2uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, gl43::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP3ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, gl43::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP3uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, gl43::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP4ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, gl43::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP4uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, gl43::GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribPointer(index, size, static_cast<gl::GLenum>(type), normalized, stride, pointer);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
   	return FunctionObjects::VertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexP2ui(gl43::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP2ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP2uiv(gl43::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP2uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP3ui(gl43::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP3ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP3uiv(gl43::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP3uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP4ui(gl43::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP4ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP4uiv(gl43::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP4uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexPointer(GLint size, gl43::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
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

inline void glWaitSync(GLsync sync, gl43::GLbitfield flags, GLuint64 timeout)
{
   	return FunctionObjects::WaitSync(sync, static_cast<gl::GLbitfield>(flags), timeout);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::WindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
   	return FunctionObjects::WindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::WindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
   	return FunctionObjects::WindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
   	return FunctionObjects::WindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
   	return FunctionObjects::WindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::WindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
   	return FunctionObjects::WindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::WindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
   	return FunctionObjects::WindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::WindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
   	return FunctionObjects::WindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::WindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
   	return FunctionObjects::WindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::WindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
   	return FunctionObjects::WindowPos3sv(v);
}


} // namespace gl43
