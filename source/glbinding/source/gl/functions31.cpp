
#include <glbinding/gl/functions31.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl31
{

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl31


#include <glbinding/Binding.h>


namespace gl31
{

void glAccum(GLenum op, GLfloat value)
{
    return glbinding::currentBinding().glAccum(op, value);
}

void glActiveTexture(GLenum texture)
{
    return glbinding::currentBinding().glActiveTexture(texture);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::currentBinding().glAlphaFunc(func, ref);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::currentBinding().glAreTexturesResident(n, textures, residences);
}

void glArrayElement(GLint i)
{
    return glbinding::currentBinding().glArrayElement(i);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::currentBinding().glAttachShader(program, shader);
}

void glBegin(GLenum mode)
{
    return glbinding::currentBinding().glBegin(mode);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::currentBinding().glBeginConditionalRender(id, mode);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::currentBinding().glBeginQuery(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::currentBinding().glBeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::currentBinding().glBindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::currentBinding().glBindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::currentBinding().glBindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glBindBufferRange(target, index, buffer, offset, size);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::currentBinding().glBindFragDataLocation(program, color, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::currentBinding().glBindFramebuffer(target, framebuffer);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::currentBinding().glBindRenderbuffer(target, renderbuffer);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::currentBinding().glBindTexture(target, texture);
}

void glBindVertexArray(GLuint array)
{
    return glbinding::currentBinding().glBindVertexArray(array);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::currentBinding().glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glBlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glbinding::currentBinding().glBlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::currentBinding().glBlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::currentBinding().glBlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::currentBinding().glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::currentBinding().glBufferData(target, size, data, usage);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::currentBinding().glBufferSubData(target, offset, size, data);
}

void glCallList(GLuint list)
{
    return glbinding::currentBinding().glCallList(list);
}

void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::currentBinding().glCallLists(n, type, lists);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl31::GLenum>(glbinding::currentBinding().glCheckFramebufferStatus(target));
}

void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::currentBinding().glClampColor(target, clamp);
}

void glClear(ClearBufferMask mask)
{
    return glbinding::currentBinding().glClear(mask);
}

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glClearAccum(red, green, blue, alpha);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::currentBinding().glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::currentBinding().glClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::currentBinding().glClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::currentBinding().glClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glClearColor(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return glbinding::currentBinding().glClearDepth(depth);
}

void glClearIndex(GLfloat c)
{
    return glbinding::currentBinding().glClearIndex(c);
}

void glClearStencil(GLint s)
{
    return glbinding::currentBinding().glClearStencil(s);
}

void glClientActiveTexture(GLenum texture)
{
    return glbinding::currentBinding().glClientActiveTexture(texture);
}

void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return glbinding::currentBinding().glClipPlane(plane, equation);
}

void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::currentBinding().glColor3b(red, green, blue);
}

void glColor3bv(const GLbyte * v)
{
    return glbinding::currentBinding().glColor3bv(v);
}

void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::currentBinding().glColor3d(red, green, blue);
}

void glColor3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glColor3dv(v);
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::currentBinding().glColor3f(red, green, blue);
}

void glColor3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glColor3fv(v);
}

void glColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::currentBinding().glColor3i(red, green, blue);
}

void glColor3iv(const GLint * v)
{
    return glbinding::currentBinding().glColor3iv(v);
}

void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::currentBinding().glColor3s(red, green, blue);
}

void glColor3sv(const GLshort * v)
{
    return glbinding::currentBinding().glColor3sv(v);
}

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::currentBinding().glColor3ub(red, green, blue);
}

void glColor3ubv(const GLubyte * v)
{
    return glbinding::currentBinding().glColor3ubv(v);
}

void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::currentBinding().glColor3ui(red, green, blue);
}

void glColor3uiv(const GLuint * v)
{
    return glbinding::currentBinding().glColor3uiv(v);
}

void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::currentBinding().glColor3us(red, green, blue);
}

void glColor3usv(const GLushort * v)
{
    return glbinding::currentBinding().glColor3usv(v);
}

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return glbinding::currentBinding().glColor4b(red, green, blue, alpha);
}

void glColor4bv(const GLbyte * v)
{
    return glbinding::currentBinding().glColor4bv(v);
}

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return glbinding::currentBinding().glColor4d(red, green, blue, alpha);
}

void glColor4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glColor4dv(v);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glColor4f(red, green, blue, alpha);
}

void glColor4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glColor4fv(v);
}

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::currentBinding().glColor4i(red, green, blue, alpha);
}

void glColor4iv(const GLint * v)
{
    return glbinding::currentBinding().glColor4iv(v);
}

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return glbinding::currentBinding().glColor4s(red, green, blue, alpha);
}

void glColor4sv(const GLshort * v)
{
    return glbinding::currentBinding().glColor4sv(v);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return glbinding::currentBinding().glColor4ub(red, green, blue, alpha);
}

void glColor4ubv(const GLubyte * v)
{
    return glbinding::currentBinding().glColor4ubv(v);
}

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::currentBinding().glColor4ui(red, green, blue, alpha);
}

void glColor4uiv(const GLuint * v)
{
    return glbinding::currentBinding().glColor4uiv(v);
}

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return glbinding::currentBinding().glColor4us(red, green, blue, alpha);
}

void glColor4usv(const GLushort * v)
{
    return glbinding::currentBinding().glColor4usv(v);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::currentBinding().glColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::currentBinding().glColorMaski(index, r, g, b, a);
}

void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glColorMaterial(face, mode);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glColorPointer(size, type, stride, pointer);
}

void glCompileShader(GLuint shader)
{
    return glbinding::currentBinding().glCompileShader(shader);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::currentBinding().glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::currentBinding().glCopyPixels(x, y, width, height, type);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLuint glCreateProgram()
{
    return glbinding::currentBinding().glCreateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return glbinding::currentBinding().glCreateShader(type);
}

void glCullFace(GLenum mode)
{
    return glbinding::currentBinding().glCullFace(mode);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::currentBinding().glDeleteBuffers(n, buffers);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::currentBinding().glDeleteFramebuffers(n, framebuffers);
}

void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::currentBinding().glDeleteLists(list, range);
}

void glDeleteProgram(GLuint program)
{
    return glbinding::currentBinding().glDeleteProgram(program);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::currentBinding().glDeleteQueries(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::currentBinding().glDeleteRenderbuffers(n, renderbuffers);
}

void glDeleteShader(GLuint shader)
{
    return glbinding::currentBinding().glDeleteShader(shader);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::currentBinding().glDeleteTextures(n, textures);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::currentBinding().glDeleteVertexArrays(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glbinding::currentBinding().glDepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glbinding::currentBinding().glDepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::currentBinding().glDepthRange(near_, far_);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::currentBinding().glDetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glbinding::currentBinding().glDisable(cap);
}

void glDisableClientState(GLenum array)
{
    return glbinding::currentBinding().glDisableClientState(array);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::currentBinding().glDisableVertexAttribArray(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glDisablei(target, index);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::currentBinding().glDrawArrays(mode, first, count);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawBuffer(GLenum buf)
{
    return glbinding::currentBinding().glDrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::currentBinding().glDrawBuffers(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawElements(mode, count, type, indices);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glDrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawRangeElements(mode, start, end, count, type, indices);
}

void glEdgeFlag(GLboolean flag)
{
    return glbinding::currentBinding().glEdgeFlag(flag);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glEdgeFlagPointer(stride, pointer);
}

void glEdgeFlagv(const GLboolean * flag)
{
    return glbinding::currentBinding().glEdgeFlagv(flag);
}

void glEnable(GLenum cap)
{
    return glbinding::currentBinding().glEnable(cap);
}

void glEnableClientState(GLenum array)
{
    return glbinding::currentBinding().glEnableClientState(array);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::currentBinding().glEnableVertexAttribArray(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glEnablei(target, index);
}

void glEnd()
{
    return glbinding::currentBinding().glEnd();
}

void glEndConditionalRender()
{
    return glbinding::currentBinding().glEndConditionalRender();
}

void glEndList()
{
    return glbinding::currentBinding().glEndList();
}

void glEndQuery(GLenum target)
{
    return glbinding::currentBinding().glEndQuery(target);
}

void glEndTransformFeedback()
{
    return glbinding::currentBinding().glEndTransformFeedback();
}

void glEvalCoord1d(GLdouble u)
{
    return glbinding::currentBinding().glEvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u)
{
    return glbinding::currentBinding().glEvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u)
{
    return glbinding::currentBinding().glEvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u)
{
    return glbinding::currentBinding().glEvalCoord1fv(u);
}

void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return glbinding::currentBinding().glEvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u)
{
    return glbinding::currentBinding().glEvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return glbinding::currentBinding().glEvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u)
{
    return glbinding::currentBinding().glEvalCoord2fv(u);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return glbinding::currentBinding().glEvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return glbinding::currentBinding().glEvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i)
{
    return glbinding::currentBinding().glEvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j)
{
    return glbinding::currentBinding().glEvalPoint2(i, j);
}

void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return glbinding::currentBinding().glFeedbackBuffer(size, type, buffer);
}

void glFinish()
{
    return glbinding::currentBinding().glFinish();
}

void glFlush()
{
    return glbinding::currentBinding().glFlush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::currentBinding().glFlushMappedBufferRange(target, offset, length);
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glFogCoordPointer(type, stride, pointer);
}

void glFogCoordd(GLdouble coord)
{
    return glbinding::currentBinding().glFogCoordd(coord);
}

void glFogCoorddv(const GLdouble * coord)
{
    return glbinding::currentBinding().glFogCoorddv(coord);
}

void glFogCoordf(GLfloat coord)
{
    return glbinding::currentBinding().glFogCoordf(coord);
}

void glFogCoordfv(const GLfloat * coord)
{
    return glbinding::currentBinding().glFogCoordfv(coord);
}

void glFogf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glFogf(pname, param);
}

void glFogfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glFogfv(pname, params);
}

void glFogi(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glFogiv(pname, params);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::currentBinding().glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::currentBinding().glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::currentBinding().glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFrontFace(GLenum mode)
{
    return glbinding::currentBinding().glFrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glFrustum(left, right, bottom, top, zNear, zFar);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::currentBinding().glGenBuffers(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::currentBinding().glGenFramebuffers(n, framebuffers);
}

GLuint glGenLists(GLsizei range)
{
    return glbinding::currentBinding().glGenLists(range);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::currentBinding().glGenQueries(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::currentBinding().glGenRenderbuffers(n, renderbuffers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::currentBinding().glGenTextures(n, textures);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::currentBinding().glGenVertexArrays(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return glbinding::currentBinding().glGenerateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::currentBinding().glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::currentBinding().glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::currentBinding().glGetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleanv(pname, data);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetBufferPointerv(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::currentBinding().glGetBufferSubData(target, offset, size, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::currentBinding().glGetClipPlane(plane, equation);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::currentBinding().glGetCompressedTexImage(target, level, img);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl31::GLenum>(glbinding::currentBinding().glGetError());
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::currentBinding().glGetFloatv(pname, data);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::currentBinding().glGetIntegeri_v(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::currentBinding().glGetIntegerv(pname, data);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetLightiv(light, pname, params);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return glbinding::currentBinding().glGetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return glbinding::currentBinding().glGetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return glbinding::currentBinding().glGetMapiv(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMaterialiv(face, pname, params);
}

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return glbinding::currentBinding().glGetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return glbinding::currentBinding().glGetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return glbinding::currentBinding().glGetPixelMapusv(map, values);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetPointerv(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
    return glbinding::currentBinding().glGetPolygonStipple(mask);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::currentBinding().glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramiv(program, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetQueryObjectuiv(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryiv(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetRenderbufferParameteriv(target, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::currentBinding().glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::currentBinding().glGetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glbinding::currentBinding().glGetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::currentBinding().glGetStringi(name, index);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexEnviv(target, pname, params);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexGenfv(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexGeniv(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glGetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexParameteriv(target, pname, params);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::currentBinding().glGetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::currentBinding().glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetUniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::currentBinding().glGetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::currentBinding().glGetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::currentBinding().glGetUniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::currentBinding().glGetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribiv(index, pname, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glbinding::currentBinding().glHint(target, mode);
}

void glIndexMask(GLuint mask)
{
    return glbinding::currentBinding().glIndexMask(mask);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glIndexPointer(type, stride, pointer);
}

void glIndexd(GLdouble c)
{
    return glbinding::currentBinding().glIndexd(c);
}

void glIndexdv(const GLdouble * c)
{
    return glbinding::currentBinding().glIndexdv(c);
}

void glIndexf(GLfloat c)
{
    return glbinding::currentBinding().glIndexf(c);
}

void glIndexfv(const GLfloat * c)
{
    return glbinding::currentBinding().glIndexfv(c);
}

void glIndexi(GLint c)
{
    return glbinding::currentBinding().glIndexi(c);
}

void glIndexiv(const GLint * c)
{
    return glbinding::currentBinding().glIndexiv(c);
}

void glIndexs(GLshort c)
{
    return glbinding::currentBinding().glIndexs(c);
}

void glIndexsv(const GLshort * c)
{
    return glbinding::currentBinding().glIndexsv(c);
}

void glIndexub(GLubyte c)
{
    return glbinding::currentBinding().glIndexub(c);
}

void glIndexubv(const GLubyte * c)
{
    return glbinding::currentBinding().glIndexubv(c);
}

void glInitNames()
{
    return glbinding::currentBinding().glInitNames();
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glInterleavedArrays(format, stride, pointer);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::currentBinding().glIsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::currentBinding().glIsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glIsEnabledi(target, index);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::currentBinding().glIsFramebuffer(framebuffer);
}

GLboolean glIsList(GLuint list)
{
    return glbinding::currentBinding().glIsList(list);
}

GLboolean glIsProgram(GLuint program)
{
    return glbinding::currentBinding().glIsProgram(program);
}

GLboolean glIsQuery(GLuint id)
{
    return glbinding::currentBinding().glIsQuery(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::currentBinding().glIsRenderbuffer(renderbuffer);
}

GLboolean glIsShader(GLuint shader)
{
    return glbinding::currentBinding().glIsShader(shader);
}

GLboolean glIsTexture(GLuint texture)
{
    return glbinding::currentBinding().glIsTexture(texture);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::currentBinding().glIsVertexArray(array);
}

void glLightModelf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glLightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glLightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glLightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glLightModeliv(pname, params);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glLightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glLightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glLighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glLightiv(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
    return glbinding::currentBinding().glLineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
    return glbinding::currentBinding().glLineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glbinding::currentBinding().glLinkProgram(program);
}

void glListBase(GLuint base)
{
    return glbinding::currentBinding().glListBase(base);
}

void glLoadIdentity()
{
    return glbinding::currentBinding().glLoadIdentity();
}

void glLoadMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glLoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glLoadMatrixf(m);
}

void glLoadName(GLuint name)
{
    return glbinding::currentBinding().glLoadName(name);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixf(m);
}

void glLogicOp(GLenum opcode)
{
    return glbinding::currentBinding().glLogicOp(opcode);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::currentBinding().glMap1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::currentBinding().glMap1f(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::currentBinding().glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::currentBinding().glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::currentBinding().glMapBuffer(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::currentBinding().glMapBufferRange(target, offset, length, access);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return glbinding::currentBinding().glMapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return glbinding::currentBinding().glMapGrid1f(un, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return glbinding::currentBinding().glMapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glMapGrid2f(un, u1, u2, vn, v1, v2);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glMaterialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glMaterialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glMateriali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMaterialiv(face, pname, params);
}

void glMatrixMode(GLenum mode)
{
    return glbinding::currentBinding().glMatrixMode(mode);
}

void glMultMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glMultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glMultMatrixf(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixd(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixf(m);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::currentBinding().glMultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::currentBinding().glMultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return glbinding::currentBinding().glMultiTexCoord1d(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord1dv(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return glbinding::currentBinding().glMultiTexCoord1f(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord1fv(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
    return glbinding::currentBinding().glMultiTexCoord1i(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord1iv(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return glbinding::currentBinding().glMultiTexCoord1s(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord1sv(target, v);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::currentBinding().glMultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord2dv(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::currentBinding().glMultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord2fv(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return glbinding::currentBinding().glMultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord2iv(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return glbinding::currentBinding().glMultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord2sv(target, v);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::currentBinding().glMultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord3dv(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::currentBinding().glMultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord3fv(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::currentBinding().glMultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord3iv(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::currentBinding().glMultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord3sv(target, v);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::currentBinding().glMultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord4dv(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::currentBinding().glMultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord4fv(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::currentBinding().glMultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord4iv(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::currentBinding().glMultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord4sv(target, v);
}

void glNewList(GLuint list, GLenum mode)
{
    return glbinding::currentBinding().glNewList(list, mode);
}

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::currentBinding().glNormal3b(nx, ny, nz);
}

void glNormal3bv(const GLbyte * v)
{
    return glbinding::currentBinding().glNormal3bv(v);
}

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::currentBinding().glNormal3d(nx, ny, nz);
}

void glNormal3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glNormal3dv(v);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::currentBinding().glNormal3f(nx, ny, nz);
}

void glNormal3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glNormal3fv(v);
}

void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return glbinding::currentBinding().glNormal3i(nx, ny, nz);
}

void glNormal3iv(const GLint * v)
{
    return glbinding::currentBinding().glNormal3iv(v);
}

void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::currentBinding().glNormal3s(nx, ny, nz);
}

void glNormal3sv(const GLshort * v)
{
    return glbinding::currentBinding().glNormal3sv(v);
}

void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glNormalPointer(type, stride, pointer);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glOrtho(left, right, bottom, top, zNear, zFar);
}

void glPassThrough(GLfloat token)
{
    return glbinding::currentBinding().glPassThrough(token);
}

void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return glbinding::currentBinding().glPixelMapfv(map, mapsize, values);
}

void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return glbinding::currentBinding().glPixelMapuiv(map, mapsize, values);
}

void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return glbinding::currentBinding().glPixelMapusv(map, mapsize, values);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelStorei(pname, param);
}

void glPixelTransferf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelTransferf(pname, param);
}

void glPixelTransferi(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelTransferi(pname, param);
}

void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return glbinding::currentBinding().glPixelZoom(xfactor, yfactor);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPointParameterf(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPointParameterfv(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPointParameteri(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glPointParameteriv(pname, params);
}

void glPointSize(GLfloat size)
{
    return glbinding::currentBinding().glPointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glPolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::currentBinding().glPolygonOffset(factor, units);
}

void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::currentBinding().glPolygonStipple(mask);
}

void glPopAttrib()
{
    return glbinding::currentBinding().glPopAttrib();
}

void glPopClientAttrib()
{
    return glbinding::currentBinding().glPopClientAttrib();
}

void glPopMatrix()
{
    return glbinding::currentBinding().glPopMatrix();
}

void glPopName()
{
    return glbinding::currentBinding().glPopName();
}

void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::currentBinding().glPrimitiveRestartIndex(index);
}

void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return glbinding::currentBinding().glPrioritizeTextures(n, textures, priorities);
}

void glPushAttrib(AttribMask mask)
{
    return glbinding::currentBinding().glPushAttrib(mask);
}

void glPushClientAttrib(ClientAttribMask mask)
{
    return glbinding::currentBinding().glPushClientAttrib(mask);
}

void glPushMatrix()
{
    return glbinding::currentBinding().glPushMatrix();
}

void glPushName(GLuint name)
{
    return glbinding::currentBinding().glPushName(name);
}

void glRasterPos2d(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glRasterPos2d(x, y);
}

void glRasterPos2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glRasterPos2dv(v);
}

void glRasterPos2f(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glRasterPos2f(x, y);
}

void glRasterPos2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glRasterPos2fv(v);
}

void glRasterPos2i(GLint x, GLint y)
{
    return glbinding::currentBinding().glRasterPos2i(x, y);
}

void glRasterPos2iv(const GLint * v)
{
    return glbinding::currentBinding().glRasterPos2iv(v);
}

void glRasterPos2s(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glRasterPos2s(x, y);
}

void glRasterPos2sv(const GLshort * v)
{
    return glbinding::currentBinding().glRasterPos2sv(v);
}

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glRasterPos3d(x, y, z);
}

void glRasterPos3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glRasterPos3dv(v);
}

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glRasterPos3f(x, y, z);
}

void glRasterPos3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glRasterPos3fv(v);
}

void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glRasterPos3i(x, y, z);
}

void glRasterPos3iv(const GLint * v)
{
    return glbinding::currentBinding().glRasterPos3iv(v);
}

void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glRasterPos3s(x, y, z);
}

void glRasterPos3sv(const GLshort * v)
{
    return glbinding::currentBinding().glRasterPos3sv(v);
}

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glRasterPos4d(x, y, z, w);
}

void glRasterPos4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glRasterPos4dv(v);
}

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glRasterPos4f(x, y, z, w);
}

void glRasterPos4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glRasterPos4fv(v);
}

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glRasterPos4i(x, y, z, w);
}

void glRasterPos4iv(const GLint * v)
{
    return glbinding::currentBinding().glRasterPos4iv(v);
}

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glRasterPos4s(x, y, z, w);
}

void glRasterPos4sv(const GLshort * v)
{
    return glbinding::currentBinding().glRasterPos4sv(v);
}

void glReadBuffer(GLenum src)
{
    return glbinding::currentBinding().glReadBuffer(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glReadPixels(x, y, width, height, format, type, pixels);
}

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return glbinding::currentBinding().glRectd(x1, y1, x2, y2);
}

void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return glbinding::currentBinding().glRectdv(v1, v2);
}

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return glbinding::currentBinding().glRectf(x1, y1, x2, y2);
}

void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return glbinding::currentBinding().glRectfv(v1, v2);
}

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return glbinding::currentBinding().glRecti(x1, y1, x2, y2);
}

void glRectiv(const GLint * v1, const GLint * v2)
{
    return glbinding::currentBinding().glRectiv(v1, v2);
}

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return glbinding::currentBinding().glRects(x1, y1, x2, y2);
}

void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return glbinding::currentBinding().glRectsv(v1, v2);
}

GLint glRenderMode(GLenum mode)
{
    return glbinding::currentBinding().glRenderMode(mode);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glRotated(angle, x, y, z);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glRotatef(angle, x, y, z);
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleCoverage(value, invert);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glScaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glScalef(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glScissor(x, y, width, height);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::currentBinding().glSecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
    return glbinding::currentBinding().glSecondaryColor3bv(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::currentBinding().glSecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glSecondaryColor3dv(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::currentBinding().glSecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glSecondaryColor3fv(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::currentBinding().glSecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
    return glbinding::currentBinding().glSecondaryColor3iv(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::currentBinding().glSecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
    return glbinding::currentBinding().glSecondaryColor3sv(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::currentBinding().glSecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
    return glbinding::currentBinding().glSecondaryColor3ubv(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::currentBinding().glSecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
    return glbinding::currentBinding().glSecondaryColor3uiv(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::currentBinding().glSecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
    return glbinding::currentBinding().glSecondaryColor3usv(v);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glSecondaryColorPointer(size, type, stride, pointer);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::currentBinding().glSelectBuffer(size, buffer);
}

void glShadeModel(GLenum mode)
{
    return glbinding::currentBinding().glShadeModel(mode);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::currentBinding().glShaderSource(shader, count, string, length);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glStencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glStencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glbinding::currentBinding().glStencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::currentBinding().glStencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::currentBinding().glStencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::currentBinding().glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::currentBinding().glTexBuffer(target, internalformat, buffer);
}

void glTexCoord1d(GLdouble s)
{
    return glbinding::currentBinding().glTexCoord1d(s);
}

void glTexCoord1dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord1dv(v);
}

void glTexCoord1f(GLfloat s)
{
    return glbinding::currentBinding().glTexCoord1f(s);
}

void glTexCoord1fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord1fv(v);
}

void glTexCoord1i(GLint s)
{
    return glbinding::currentBinding().glTexCoord1i(s);
}

void glTexCoord1iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord1iv(v);
}

void glTexCoord1s(GLshort s)
{
    return glbinding::currentBinding().glTexCoord1s(s);
}

void glTexCoord1sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord1sv(v);
}

void glTexCoord2d(GLdouble s, GLdouble t)
{
    return glbinding::currentBinding().glTexCoord2d(s, t);
}

void glTexCoord2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord2dv(v);
}

void glTexCoord2f(GLfloat s, GLfloat t)
{
    return glbinding::currentBinding().glTexCoord2f(s, t);
}

void glTexCoord2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fv(v);
}

void glTexCoord2i(GLint s, GLint t)
{
    return glbinding::currentBinding().glTexCoord2i(s, t);
}

void glTexCoord2iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord2iv(v);
}

void glTexCoord2s(GLshort s, GLshort t)
{
    return glbinding::currentBinding().glTexCoord2s(s, t);
}

void glTexCoord2sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord2sv(v);
}

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::currentBinding().glTexCoord3d(s, t, r);
}

void glTexCoord3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord3dv(v);
}

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::currentBinding().glTexCoord3f(s, t, r);
}

void glTexCoord3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord3fv(v);
}

void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return glbinding::currentBinding().glTexCoord3i(s, t, r);
}

void glTexCoord3iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord3iv(v);
}

void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return glbinding::currentBinding().glTexCoord3s(s, t, r);
}

void glTexCoord3sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord3sv(v);
}

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::currentBinding().glTexCoord4d(s, t, r, q);
}

void glTexCoord4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord4dv(v);
}

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::currentBinding().glTexCoord4f(s, t, r, q);
}

void glTexCoord4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord4fv(v);
}

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::currentBinding().glTexCoord4i(s, t, r, q);
}

void glTexCoord4iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord4iv(v);
}

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::currentBinding().glTexCoord4s(s, t, r, q);
}

void glTexCoord4sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord4sv(v);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glTexCoordPointer(size, type, stride, pointer);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexEnvf(target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexEnvfv(target, pname, params);
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexEnvi(target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexEnviv(target, pname, params);
}

void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::currentBinding().glTexGend(coord, pname, param);
}

void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::currentBinding().glTexGendv(coord, pname, params);
}

void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexGenf(coord, pname, param);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexGenfv(coord, pname, params);
}

void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexGeni(coord, pname, param);
}

void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexGeniv(coord, pname, params);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexParameterIiv(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::currentBinding().glTexParameterIuiv(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexParameteriv(target, pname, params);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::currentBinding().glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glTranslated(x, y, z);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTranslatef(x, y, z);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::currentBinding().glUniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return glbinding::currentBinding().glUniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::currentBinding().glUniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform1uiv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::currentBinding().glUniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::currentBinding().glUniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::currentBinding().glUniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform2uiv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glUniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::currentBinding().glUniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::currentBinding().glUniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform3uiv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::currentBinding().glUniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::currentBinding().glUniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::currentBinding().glUniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::currentBinding().glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4x3fv(location, count, transpose, value);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::currentBinding().glUnmapBuffer(target);
}

void glUseProgram(GLuint program)
{
    return glbinding::currentBinding().glUseProgram(program);
}

void glValidateProgram(GLuint program)
{
    return glbinding::currentBinding().glValidateProgram(program);
}

void glVertex2d(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertex2d(x, y);
}

void glVertex2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glVertex2dv(v);
}

void glVertex2f(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertex2f(x, y);
}

void glVertex2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glVertex2fv(v);
}

void glVertex2i(GLint x, GLint y)
{
    return glbinding::currentBinding().glVertex2i(x, y);
}

void glVertex2iv(const GLint * v)
{
    return glbinding::currentBinding().glVertex2iv(v);
}

void glVertex2s(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertex2s(x, y);
}

void glVertex2sv(const GLshort * v)
{
    return glbinding::currentBinding().glVertex2sv(v);
}

void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertex3d(x, y, z);
}

void glVertex3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glVertex3dv(v);
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertex3f(x, y, z);
}

void glVertex3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glVertex3fv(v);
}

void glVertex3i(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glVertex3i(x, y, z);
}

void glVertex3iv(const GLint * v)
{
    return glbinding::currentBinding().glVertex3iv(v);
}

void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertex3s(x, y, z);
}

void glVertex3sv(const GLshort * v)
{
    return glbinding::currentBinding().glVertex3sv(v);
}

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertex4d(x, y, z, w);
}

void glVertex4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glVertex4dv(v);
}

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertex4f(x, y, z, w);
}

void glVertex4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glVertex4fv(v);
}

void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glVertex4i(x, y, z, w);
}

void glVertex4iv(const GLint * v)
{
    return glbinding::currentBinding().glVertex4iv(v);
}

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertex4s(x, y, z, w);
}

void glVertex4sv(const GLshort * v)
{
    return glbinding::currentBinding().glVertex4sv(v);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttrib1d(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib1dv(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::currentBinding().glVertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib1fv(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::currentBinding().glVertexAttrib1s(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib1sv(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttrib2d(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib2dv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib2fv(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertexAttrib2s(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib2sv(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib3dv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib3fv(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib3sv(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nbv(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttrib4Niv(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nsv(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::currentBinding().glVertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nubv(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nusv(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4bv(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib4dv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib4fv(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttrib4iv(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4sv(index, v);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4ubv(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttrib4uiv(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttrib4usv(index, v);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::currentBinding().glVertexAttribI1i(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI1iv(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::currentBinding().glVertexAttribI1ui(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI1uiv(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::currentBinding().glVertexAttribI2i(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI2iv(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::currentBinding().glVertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI2uiv(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glVertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI3iv(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::currentBinding().glVertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI3uiv(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttribI4bv(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glVertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI4iv(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribI4sv(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttribI4ubv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::currentBinding().glVertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI4uiv(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttribI4usv(index, v);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexPointer(size, type, stride, pointer);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glViewport(x, y, width, height);
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glWindowPos2d(x, y);
}

void glWindowPos2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos2dv(v);
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glWindowPos2f(x, y);
}

void glWindowPos2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos2fv(v);
}

void glWindowPos2i(GLint x, GLint y)
{
    return glbinding::currentBinding().glWindowPos2i(x, y);
}

void glWindowPos2iv(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos2iv(v);
}

void glWindowPos2s(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glWindowPos2s(x, y);
}

void glWindowPos2sv(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos2sv(v);
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glWindowPos3d(x, y, z);
}

void glWindowPos3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos3dv(v);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glWindowPos3f(x, y, z);
}

void glWindowPos3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos3fv(v);
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glWindowPos3i(x, y, z);
}

void glWindowPos3iv(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos3iv(v);
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glWindowPos3s(x, y, z);
}

void glWindowPos3sv(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos3sv(v);
}


} // namespace gl31
