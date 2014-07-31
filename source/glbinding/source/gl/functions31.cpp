
#include <glbinding/gl/functions31.h>

#include <glbinding/gl/functions.h>

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
    return gl::glAccum(op, value);
}

void glActiveTexture(GLenum texture)
{
    return gl::glActiveTexture(texture);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return gl::glAlphaFunc(func, ref);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return gl::glAreTexturesResident(n, textures, residences);
}

void glArrayElement(GLint i)
{
    return gl::glArrayElement(i);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return gl::glAttachShader(program, shader);
}

void glBegin(GLenum mode)
{
    return gl::glBegin(mode);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return gl::glBeginConditionalRender(id, mode);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return gl::glBeginQuery(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return gl::glBindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return gl::glBindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRange(target, index, buffer, offset, size);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return gl::glBindFragDataLocation(program, color, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return gl::glBindFramebuffer(target, framebuffer);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return gl::glBindRenderbuffer(target, renderbuffer);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return gl::glBindTexture(target, texture);
}

void glBindVertexArray(GLuint array)
{
    return gl::glBindVertexArray(array);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return gl::glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glBlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return gl::glBlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return gl::glBlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gl::glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gl::glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return gl::glBufferData(target, size, data, usage);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gl::glBufferSubData(target, offset, size, data);
}

void glCallList(GLuint list)
{
    return gl::glCallList(list);
}

void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return gl::glCallLists(n, type, lists);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl31::GLenum>((*glbinding::currentBinding().glCheckFramebufferStatus)(target));
}

void glClampColor(GLenum target, GLenum clamp)
{
    return gl::glClampColor(target, clamp);
}

void glClear(ClearBufferMask mask)
{
    return gl::glClear(mask);
}

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glClearAccum(red, green, blue, alpha);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return gl::glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return gl::glClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return gl::glClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return gl::glClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glClearColor(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return gl::glClearDepth(depth);
}

void glClearIndex(GLfloat c)
{
    return gl::glClearIndex(c);
}

void glClearStencil(GLint s)
{
    return gl::glClearStencil(s);
}

void glClientActiveTexture(GLenum texture)
{
    return gl::glClientActiveTexture(texture);
}

void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return gl::glClipPlane(plane, equation);
}

void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return gl::glColor3b(red, green, blue);
}

void glColor3bv(const GLbyte * v)
{
    return gl::glColor3bv(v);
}

void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return gl::glColor3d(red, green, blue);
}

void glColor3dv(const GLdouble * v)
{
    return gl::glColor3dv(v);
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return gl::glColor3f(red, green, blue);
}

void glColor3fv(const GLfloat * v)
{
    return gl::glColor3fv(v);
}

void glColor3i(GLint red, GLint green, GLint blue)
{
    return gl::glColor3i(red, green, blue);
}

void glColor3iv(const GLint * v)
{
    return gl::glColor3iv(v);
}

void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return gl::glColor3s(red, green, blue);
}

void glColor3sv(const GLshort * v)
{
    return gl::glColor3sv(v);
}

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return gl::glColor3ub(red, green, blue);
}

void glColor3ubv(const GLubyte * v)
{
    return gl::glColor3ubv(v);
}

void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return gl::glColor3ui(red, green, blue);
}

void glColor3uiv(const GLuint * v)
{
    return gl::glColor3uiv(v);
}

void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return gl::glColor3us(red, green, blue);
}

void glColor3usv(const GLushort * v)
{
    return gl::glColor3usv(v);
}

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return gl::glColor4b(red, green, blue, alpha);
}

void glColor4bv(const GLbyte * v)
{
    return gl::glColor4bv(v);
}

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return gl::glColor4d(red, green, blue, alpha);
}

void glColor4dv(const GLdouble * v)
{
    return gl::glColor4dv(v);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glColor4f(red, green, blue, alpha);
}

void glColor4fv(const GLfloat * v)
{
    return gl::glColor4fv(v);
}

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return gl::glColor4i(red, green, blue, alpha);
}

void glColor4iv(const GLint * v)
{
    return gl::glColor4iv(v);
}

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return gl::glColor4s(red, green, blue, alpha);
}

void glColor4sv(const GLshort * v)
{
    return gl::glColor4sv(v);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return gl::glColor4ub(red, green, blue, alpha);
}

void glColor4ubv(const GLubyte * v)
{
    return gl::glColor4ubv(v);
}

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return gl::glColor4ui(red, green, blue, alpha);
}

void glColor4uiv(const GLuint * v)
{
    return gl::glColor4uiv(v);
}

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return gl::glColor4us(red, green, blue, alpha);
}

void glColor4usv(const GLushort * v)
{
    return gl::glColor4usv(v);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return gl::glColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gl::glColorMaski(index, r, g, b, a);
}

void glColorMaterial(GLenum face, GLenum mode)
{
    return gl::glColorMaterial(face, mode);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glColorPointer(size, type, stride, pointer);
}

void glCompileShader(GLuint shader)
{
    return gl::glCompileShader(shader);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gl::glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return gl::glCopyPixels(x, y, width, height, type);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLuint glCreateProgram()
{
    return gl::glCreateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return gl::glCreateShader(type);
}

void glCullFace(GLenum mode)
{
    return gl::glCullFace(mode);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return gl::glDeleteBuffers(n, buffers);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return gl::glDeleteFramebuffers(n, framebuffers);
}

void glDeleteLists(GLuint list, GLsizei range)
{
    return gl::glDeleteLists(list, range);
}

void glDeleteProgram(GLuint program)
{
    return gl::glDeleteProgram(program);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteQueries(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return gl::glDeleteRenderbuffers(n, renderbuffers);
}

void glDeleteShader(GLuint shader)
{
    return gl::glDeleteShader(shader);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return gl::glDeleteTextures(n, textures);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return gl::glDeleteVertexArrays(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return gl::glDepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return gl::glDepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return gl::glDepthRange(near_, far_);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return gl::glDetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return gl::glDisable(cap);
}

void glDisableClientState(GLenum array)
{
    return gl::glDisableClientState(array);
}

void glDisableVertexAttribArray(GLuint index)
{
    return gl::glDisableVertexAttribArray(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return gl::glDisablei(target, index);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawArrays(mode, first, count);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return gl::glDrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawBuffer(GLenum buf)
{
    return gl::glDrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return gl::glDrawBuffers(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawElements(mode, count, type, indices);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return gl::glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glDrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawRangeElements(mode, start, end, count, type, indices);
}

void glEdgeFlag(GLboolean flag)
{
    return gl::glEdgeFlag(flag);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return gl::glEdgeFlagPointer(stride, pointer);
}

void glEdgeFlagv(const GLboolean * flag)
{
    return gl::glEdgeFlagv(flag);
}

void glEnable(GLenum cap)
{
    return gl::glEnable(cap);
}

void glEnableClientState(GLenum array)
{
    return gl::glEnableClientState(array);
}

void glEnableVertexAttribArray(GLuint index)
{
    return gl::glEnableVertexAttribArray(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return gl::glEnablei(target, index);
}

void glEnd()
{
    return gl::glEnd();
}

void glEndConditionalRender()
{
    return gl::glEndConditionalRender();
}

void glEndList()
{
    return gl::glEndList();
}

void glEndQuery(GLenum target)
{
    return gl::glEndQuery(target);
}

void glEndTransformFeedback()
{
    return gl::glEndTransformFeedback();
}

void glEvalCoord1d(GLdouble u)
{
    return gl::glEvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u)
{
    return gl::glEvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u)
{
    return gl::glEvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u)
{
    return gl::glEvalCoord1fv(u);
}

void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return gl::glEvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u)
{
    return gl::glEvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return gl::glEvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u)
{
    return gl::glEvalCoord2fv(u);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return gl::glEvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return gl::glEvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i)
{
    return gl::glEvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j)
{
    return gl::glEvalPoint2(i, j);
}

void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return gl::glFeedbackBuffer(size, type, buffer);
}

void glFinish()
{
    return gl::glFinish();
}

void glFlush()
{
    return gl::glFlush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return gl::glFlushMappedBufferRange(target, offset, length);
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glFogCoordPointer(type, stride, pointer);
}

void glFogCoordd(GLdouble coord)
{
    return gl::glFogCoordd(coord);
}

void glFogCoorddv(const GLdouble * coord)
{
    return gl::glFogCoorddv(coord);
}

void glFogCoordf(GLfloat coord)
{
    return gl::glFogCoordf(coord);
}

void glFogCoordfv(const GLfloat * coord)
{
    return gl::glFogCoordfv(coord);
}

void glFogf(GLenum pname, GLfloat param)
{
    return gl::glFogf(pname, param);
}

void glFogfv(GLenum pname, const GLfloat * params)
{
    return gl::glFogfv(pname, params);
}

void glFogi(GLenum pname, GLint param)
{
    return gl::glFogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params)
{
    return gl::glFogiv(pname, params);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFrontFace(GLenum mode)
{
    return gl::glFrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glFrustum(left, right, bottom, top, zNear, zFar);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return gl::glGenBuffers(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return gl::glGenFramebuffers(n, framebuffers);
}

GLuint glGenLists(GLsizei range)
{
    return gl::glGenLists(range);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return gl::glGenQueries(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return gl::glGenRenderbuffers(n, renderbuffers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return gl::glGenTextures(n, textures);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return gl::glGenVertexArrays(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return gl::glGenerateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return gl::glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return gl::glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return gl::glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return gl::glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return gl::glGetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return gl::glGetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return gl::glGetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return gl::glGetBooleanv(pname, data);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return gl::glGetBufferPointerv(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return gl::glGetBufferSubData(target, offset, size, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return gl::glGetClipPlane(plane, equation);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return gl::glGetCompressedTexImage(target, level, img);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return gl::glGetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl31::GLenum>((*glbinding::currentBinding().glGetError)());
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return gl::glGetFloatv(pname, data);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return gl::glGetIntegeri_v(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return gl::glGetIntegerv(pname, data);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return gl::glGetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return gl::glGetLightiv(light, pname, params);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return gl::glGetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return gl::glGetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return gl::glGetMapiv(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return gl::glGetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return gl::glGetMaterialiv(face, pname, params);
}

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return gl::glGetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return gl::glGetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return gl::glGetPixelMapusv(map, values);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return gl::glGetPointerv(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
    return gl::glGetPolygonStipple(mask);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return gl::glGetProgramiv(program, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetQueryObjectuiv(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetQueryiv(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetRenderbufferParameteriv(target, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return gl::glGetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return gl::glGetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return gl::glGetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return gl::glGetStringi(name, index);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexEnviv(target, pname, params);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return gl::glGetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return gl::glGetTexGenfv(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return gl::glGetTexGeniv(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return gl::glGetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameteriv(target, pname, params);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return gl::glGetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return gl::glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return gl::glGetUniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return gl::glGetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return gl::glGetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return gl::glGetUniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return gl::glGetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return gl::glGetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribiv(index, pname, params);
}

void glHint(GLenum target, GLenum mode)
{
    return gl::glHint(target, mode);
}

void glIndexMask(GLuint mask)
{
    return gl::glIndexMask(mask);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glIndexPointer(type, stride, pointer);
}

void glIndexd(GLdouble c)
{
    return gl::glIndexd(c);
}

void glIndexdv(const GLdouble * c)
{
    return gl::glIndexdv(c);
}

void glIndexf(GLfloat c)
{
    return gl::glIndexf(c);
}

void glIndexfv(const GLfloat * c)
{
    return gl::glIndexfv(c);
}

void glIndexi(GLint c)
{
    return gl::glIndexi(c);
}

void glIndexiv(const GLint * c)
{
    return gl::glIndexiv(c);
}

void glIndexs(GLshort c)
{
    return gl::glIndexs(c);
}

void glIndexsv(const GLshort * c)
{
    return gl::glIndexsv(c);
}

void glIndexub(GLubyte c)
{
    return gl::glIndexub(c);
}

void glIndexubv(const GLubyte * c)
{
    return gl::glIndexubv(c);
}

void glInitNames()
{
    return gl::glInitNames();
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return gl::glInterleavedArrays(format, stride, pointer);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return gl::glIsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return gl::glIsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return gl::glIsEnabledi(target, index);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return gl::glIsFramebuffer(framebuffer);
}

GLboolean glIsList(GLuint list)
{
    return gl::glIsList(list);
}

GLboolean glIsProgram(GLuint program)
{
    return gl::glIsProgram(program);
}

GLboolean glIsQuery(GLuint id)
{
    return gl::glIsQuery(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return gl::glIsRenderbuffer(renderbuffer);
}

GLboolean glIsShader(GLuint shader)
{
    return gl::glIsShader(shader);
}

GLboolean glIsTexture(GLuint texture)
{
    return gl::glIsTexture(texture);
}

GLboolean glIsVertexArray(GLuint array)
{
    return gl::glIsVertexArray(array);
}

void glLightModelf(GLenum pname, GLfloat param)
{
    return gl::glLightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return gl::glLightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
    return gl::glLightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
    return gl::glLightModeliv(pname, params);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return gl::glLightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return gl::glLightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
    return gl::glLighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return gl::glLightiv(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
    return gl::glLineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
    return gl::glLineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return gl::glLinkProgram(program);
}

void glListBase(GLuint base)
{
    return gl::glListBase(base);
}

void glLoadIdentity()
{
    return gl::glLoadIdentity();
}

void glLoadMatrixd(const GLdouble * m)
{
    return gl::glLoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
    return gl::glLoadMatrixf(m);
}

void glLoadName(GLuint name)
{
    return gl::glLoadName(name);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
    return gl::glLoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
    return gl::glLoadTransposeMatrixf(m);
}

void glLogicOp(GLenum opcode)
{
    return gl::glLogicOp(opcode);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return gl::glMap1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return gl::glMap1f(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return gl::glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return gl::glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return gl::glMapBuffer(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gl::glMapBufferRange(target, offset, length, access);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return gl::glMapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return gl::glMapGrid1f(un, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return gl::glMapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return gl::glMapGrid2f(un, u1, u2, vn, v1, v2);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return gl::glMaterialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return gl::glMaterialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return gl::glMateriali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return gl::glMaterialiv(face, pname, params);
}

void glMatrixMode(GLenum mode)
{
    return gl::glMatrixMode(mode);
}

void glMultMatrixd(const GLdouble * m)
{
    return gl::glMultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
    return gl::glMultMatrixf(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
    return gl::glMultTransposeMatrixd(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
    return gl::glMultTransposeMatrixf(m);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return gl::glMultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return gl::glMultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return gl::glMultiTexCoord1d(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord1dv(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return gl::glMultiTexCoord1f(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord1fv(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
    return gl::glMultiTexCoord1i(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord1iv(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return gl::glMultiTexCoord1s(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord1sv(target, v);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return gl::glMultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord2dv(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return gl::glMultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord2fv(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return gl::glMultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord2iv(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return gl::glMultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord2sv(target, v);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return gl::glMultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord3dv(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return gl::glMultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord3fv(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return gl::glMultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord3iv(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return gl::glMultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord3sv(target, v);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return gl::glMultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord4dv(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return gl::glMultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord4fv(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return gl::glMultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord4iv(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return gl::glMultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord4sv(target, v);
}

void glNewList(GLuint list, GLenum mode)
{
    return gl::glNewList(list, mode);
}

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return gl::glNormal3b(nx, ny, nz);
}

void glNormal3bv(const GLbyte * v)
{
    return gl::glNormal3bv(v);
}

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return gl::glNormal3d(nx, ny, nz);
}

void glNormal3dv(const GLdouble * v)
{
    return gl::glNormal3dv(v);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return gl::glNormal3f(nx, ny, nz);
}

void glNormal3fv(const GLfloat * v)
{
    return gl::glNormal3fv(v);
}

void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return gl::glNormal3i(nx, ny, nz);
}

void glNormal3iv(const GLint * v)
{
    return gl::glNormal3iv(v);
}

void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return gl::glNormal3s(nx, ny, nz);
}

void glNormal3sv(const GLshort * v)
{
    return gl::glNormal3sv(v);
}

void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glNormalPointer(type, stride, pointer);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glOrtho(left, right, bottom, top, zNear, zFar);
}

void glPassThrough(GLfloat token)
{
    return gl::glPassThrough(token);
}

void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return gl::glPixelMapfv(map, mapsize, values);
}

void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return gl::glPixelMapuiv(map, mapsize, values);
}

void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return gl::glPixelMapusv(map, mapsize, values);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return gl::glPixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return gl::glPixelStorei(pname, param);
}

void glPixelTransferf(GLenum pname, GLfloat param)
{
    return gl::glPixelTransferf(pname, param);
}

void glPixelTransferi(GLenum pname, GLint param)
{
    return gl::glPixelTransferi(pname, param);
}

void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return gl::glPixelZoom(xfactor, yfactor);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return gl::glPointParameterf(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfv(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return gl::glPointParameteri(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return gl::glPointParameteriv(pname, params);
}

void glPointSize(GLfloat size)
{
    return gl::glPointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return gl::glPolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return gl::glPolygonOffset(factor, units);
}

void glPolygonStipple(const GLubyte * mask)
{
    return gl::glPolygonStipple(mask);
}

void glPopAttrib()
{
    return gl::glPopAttrib();
}

void glPopClientAttrib()
{
    return gl::glPopClientAttrib();
}

void glPopMatrix()
{
    return gl::glPopMatrix();
}

void glPopName()
{
    return gl::glPopName();
}

void glPrimitiveRestartIndex(GLuint index)
{
    return gl::glPrimitiveRestartIndex(index);
}

void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return gl::glPrioritizeTextures(n, textures, priorities);
}

void glPushAttrib(AttribMask mask)
{
    return gl::glPushAttrib(mask);
}

void glPushClientAttrib(ClientAttribMask mask)
{
    return gl::glPushClientAttrib(mask);
}

void glPushMatrix()
{
    return gl::glPushMatrix();
}

void glPushName(GLuint name)
{
    return gl::glPushName(name);
}

void glRasterPos2d(GLdouble x, GLdouble y)
{
    return gl::glRasterPos2d(x, y);
}

void glRasterPos2dv(const GLdouble * v)
{
    return gl::glRasterPos2dv(v);
}

void glRasterPos2f(GLfloat x, GLfloat y)
{
    return gl::glRasterPos2f(x, y);
}

void glRasterPos2fv(const GLfloat * v)
{
    return gl::glRasterPos2fv(v);
}

void glRasterPos2i(GLint x, GLint y)
{
    return gl::glRasterPos2i(x, y);
}

void glRasterPos2iv(const GLint * v)
{
    return gl::glRasterPos2iv(v);
}

void glRasterPos2s(GLshort x, GLshort y)
{
    return gl::glRasterPos2s(x, y);
}

void glRasterPos2sv(const GLshort * v)
{
    return gl::glRasterPos2sv(v);
}

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glRasterPos3d(x, y, z);
}

void glRasterPos3dv(const GLdouble * v)
{
    return gl::glRasterPos3dv(v);
}

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glRasterPos3f(x, y, z);
}

void glRasterPos3fv(const GLfloat * v)
{
    return gl::glRasterPos3fv(v);
}

void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return gl::glRasterPos3i(x, y, z);
}

void glRasterPos3iv(const GLint * v)
{
    return gl::glRasterPos3iv(v);
}

void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return gl::glRasterPos3s(x, y, z);
}

void glRasterPos3sv(const GLshort * v)
{
    return gl::glRasterPos3sv(v);
}

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glRasterPos4d(x, y, z, w);
}

void glRasterPos4dv(const GLdouble * v)
{
    return gl::glRasterPos4dv(v);
}

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glRasterPos4f(x, y, z, w);
}

void glRasterPos4fv(const GLfloat * v)
{
    return gl::glRasterPos4fv(v);
}

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return gl::glRasterPos4i(x, y, z, w);
}

void glRasterPos4iv(const GLint * v)
{
    return gl::glRasterPos4iv(v);
}

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glRasterPos4s(x, y, z, w);
}

void glRasterPos4sv(const GLshort * v)
{
    return gl::glRasterPos4sv(v);
}

void glReadBuffer(GLenum src)
{
    return gl::glReadBuffer(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return gl::glReadPixels(x, y, width, height, format, type, pixels);
}

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return gl::glRectd(x1, y1, x2, y2);
}

void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return gl::glRectdv(v1, v2);
}

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return gl::glRectf(x1, y1, x2, y2);
}

void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return gl::glRectfv(v1, v2);
}

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return gl::glRecti(x1, y1, x2, y2);
}

void glRectiv(const GLint * v1, const GLint * v2)
{
    return gl::glRectiv(v1, v2);
}

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return gl::glRects(x1, y1, x2, y2);
}

void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return gl::glRectsv(v1, v2);
}

GLint glRenderMode(GLenum mode)
{
    return gl::glRenderMode(mode);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glRotated(angle, x, y, z);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glRotatef(angle, x, y, z);
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return gl::glSampleCoverage(value, invert);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glScaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glScalef(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glScissor(x, y, width, height);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return gl::glSecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
    return gl::glSecondaryColor3bv(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return gl::glSecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
    return gl::glSecondaryColor3dv(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return gl::glSecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
    return gl::glSecondaryColor3fv(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return gl::glSecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
    return gl::glSecondaryColor3iv(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return gl::glSecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
    return gl::glSecondaryColor3sv(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return gl::glSecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
    return gl::glSecondaryColor3ubv(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return gl::glSecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
    return gl::glSecondaryColor3uiv(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return gl::glSecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
    return gl::glSecondaryColor3usv(v);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glSecondaryColorPointer(size, type, stride, pointer);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return gl::glSelectBuffer(size, buffer);
}

void glShadeModel(GLenum mode)
{
    return gl::glShadeModel(mode);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return gl::glShaderSource(shader, count, string, length);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return gl::glStencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return gl::glStencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return gl::glStencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return gl::glStencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return gl::glStencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return gl::glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBuffer(target, internalformat, buffer);
}

void glTexCoord1d(GLdouble s)
{
    return gl::glTexCoord1d(s);
}

void glTexCoord1dv(const GLdouble * v)
{
    return gl::glTexCoord1dv(v);
}

void glTexCoord1f(GLfloat s)
{
    return gl::glTexCoord1f(s);
}

void glTexCoord1fv(const GLfloat * v)
{
    return gl::glTexCoord1fv(v);
}

void glTexCoord1i(GLint s)
{
    return gl::glTexCoord1i(s);
}

void glTexCoord1iv(const GLint * v)
{
    return gl::glTexCoord1iv(v);
}

void glTexCoord1s(GLshort s)
{
    return gl::glTexCoord1s(s);
}

void glTexCoord1sv(const GLshort * v)
{
    return gl::glTexCoord1sv(v);
}

void glTexCoord2d(GLdouble s, GLdouble t)
{
    return gl::glTexCoord2d(s, t);
}

void glTexCoord2dv(const GLdouble * v)
{
    return gl::glTexCoord2dv(v);
}

void glTexCoord2f(GLfloat s, GLfloat t)
{
    return gl::glTexCoord2f(s, t);
}

void glTexCoord2fv(const GLfloat * v)
{
    return gl::glTexCoord2fv(v);
}

void glTexCoord2i(GLint s, GLint t)
{
    return gl::glTexCoord2i(s, t);
}

void glTexCoord2iv(const GLint * v)
{
    return gl::glTexCoord2iv(v);
}

void glTexCoord2s(GLshort s, GLshort t)
{
    return gl::glTexCoord2s(s, t);
}

void glTexCoord2sv(const GLshort * v)
{
    return gl::glTexCoord2sv(v);
}

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return gl::glTexCoord3d(s, t, r);
}

void glTexCoord3dv(const GLdouble * v)
{
    return gl::glTexCoord3dv(v);
}

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return gl::glTexCoord3f(s, t, r);
}

void glTexCoord3fv(const GLfloat * v)
{
    return gl::glTexCoord3fv(v);
}

void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return gl::glTexCoord3i(s, t, r);
}

void glTexCoord3iv(const GLint * v)
{
    return gl::glTexCoord3iv(v);
}

void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return gl::glTexCoord3s(s, t, r);
}

void glTexCoord3sv(const GLshort * v)
{
    return gl::glTexCoord3sv(v);
}

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return gl::glTexCoord4d(s, t, r, q);
}

void glTexCoord4dv(const GLdouble * v)
{
    return gl::glTexCoord4dv(v);
}

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return gl::glTexCoord4f(s, t, r, q);
}

void glTexCoord4fv(const GLfloat * v)
{
    return gl::glTexCoord4fv(v);
}

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return gl::glTexCoord4i(s, t, r, q);
}

void glTexCoord4iv(const GLint * v)
{
    return gl::glTexCoord4iv(v);
}

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return gl::glTexCoord4s(s, t, r, q);
}

void glTexCoord4sv(const GLshort * v)
{
    return gl::glTexCoord4sv(v);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glTexCoordPointer(size, type, stride, pointer);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glTexEnvf(target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glTexEnvfv(target, pname, params);
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return gl::glTexEnvi(target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexEnviv(target, pname, params);
}

void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return gl::glTexGend(coord, pname, param);
}

void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return gl::glTexGendv(coord, pname, params);
}

void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return gl::glTexGenf(coord, pname, param);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return gl::glTexGenfv(coord, pname, params);
}

void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return gl::glTexGeni(coord, pname, param);
}

void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return gl::glTexGeniv(coord, pname, params);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameterIiv(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTexParameterIuiv(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glTexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glTexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return gl::glTexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameteriv(target, pname, params);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glTranslated(x, y, z);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTranslatef(x, y, z);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return gl::glUniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return gl::glUniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return gl::glUniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform1uiv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glUniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return gl::glUniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return gl::glUniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform2uiv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glUniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glUniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glUniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform3uiv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glUniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glUniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glUniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return gl::glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4x3fv(location, count, transpose, value);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return gl::glUnmapBuffer(target);
}

void glUseProgram(GLuint program)
{
    return gl::glUseProgram(program);
}

void glValidateProgram(GLuint program)
{
    return gl::glValidateProgram(program);
}

void glVertex2d(GLdouble x, GLdouble y)
{
    return gl::glVertex2d(x, y);
}

void glVertex2dv(const GLdouble * v)
{
    return gl::glVertex2dv(v);
}

void glVertex2f(GLfloat x, GLfloat y)
{
    return gl::glVertex2f(x, y);
}

void glVertex2fv(const GLfloat * v)
{
    return gl::glVertex2fv(v);
}

void glVertex2i(GLint x, GLint y)
{
    return gl::glVertex2i(x, y);
}

void glVertex2iv(const GLint * v)
{
    return gl::glVertex2iv(v);
}

void glVertex2s(GLshort x, GLshort y)
{
    return gl::glVertex2s(x, y);
}

void glVertex2sv(const GLshort * v)
{
    return gl::glVertex2sv(v);
}

void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertex3d(x, y, z);
}

void glVertex3dv(const GLdouble * v)
{
    return gl::glVertex3dv(v);
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertex3f(x, y, z);
}

void glVertex3fv(const GLfloat * v)
{
    return gl::glVertex3fv(v);
}

void glVertex3i(GLint x, GLint y, GLint z)
{
    return gl::glVertex3i(x, y, z);
}

void glVertex3iv(const GLint * v)
{
    return gl::glVertex3iv(v);
}

void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return gl::glVertex3s(x, y, z);
}

void glVertex3sv(const GLshort * v)
{
    return gl::glVertex3sv(v);
}

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertex4d(x, y, z, w);
}

void glVertex4dv(const GLdouble * v)
{
    return gl::glVertex4dv(v);
}

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertex4f(x, y, z, w);
}

void glVertex4fv(const GLfloat * v)
{
    return gl::glVertex4fv(v);
}

void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertex4i(x, y, z, w);
}

void glVertex4iv(const GLint * v)
{
    return gl::glVertex4iv(v);
}

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertex4s(x, y, z, w);
}

void glVertex4sv(const GLshort * v)
{
    return gl::glVertex4sv(v);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return gl::glVertexAttrib1d(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib1dv(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return gl::glVertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib1fv(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
    return gl::glVertexAttrib1s(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib1sv(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttrib2d(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib2dv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return gl::glVertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib2fv(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return gl::glVertexAttrib2s(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib2sv(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib3dv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib3fv(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib3sv(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4Nbv(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4Niv(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4Nsv(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return gl::glVertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4Nubv(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4Nusv(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4bv(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib4dv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib4fv(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4iv(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4sv(index, v);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4ubv(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4uiv(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4usv(index, v);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
    return gl::glVertexAttribI1i(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI1iv(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return gl::glVertexAttribI1ui(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI1uiv(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return gl::glVertexAttribI2i(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI2iv(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return gl::glVertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI2uiv(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return gl::glVertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI3iv(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return gl::glVertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI3uiv(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttribI4bv(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI4iv(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttribI4sv(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttribI4ubv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glVertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI4uiv(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttribI4usv(index, v);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexPointer(size, type, stride, pointer);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glViewport(x, y, width, height);
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
    return gl::glWindowPos2d(x, y);
}

void glWindowPos2dv(const GLdouble * v)
{
    return gl::glWindowPos2dv(v);
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
    return gl::glWindowPos2f(x, y);
}

void glWindowPos2fv(const GLfloat * v)
{
    return gl::glWindowPos2fv(v);
}

void glWindowPos2i(GLint x, GLint y)
{
    return gl::glWindowPos2i(x, y);
}

void glWindowPos2iv(const GLint * v)
{
    return gl::glWindowPos2iv(v);
}

void glWindowPos2s(GLshort x, GLshort y)
{
    return gl::glWindowPos2s(x, y);
}

void glWindowPos2sv(const GLshort * v)
{
    return gl::glWindowPos2sv(v);
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glWindowPos3d(x, y, z);
}

void glWindowPos3dv(const GLdouble * v)
{
    return gl::glWindowPos3dv(v);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glWindowPos3f(x, y, z);
}

void glWindowPos3fv(const GLfloat * v)
{
    return gl::glWindowPos3fv(v);
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return gl::glWindowPos3i(x, y, z);
}

void glWindowPos3iv(const GLint * v)
{
    return gl::glWindowPos3iv(v);
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return gl::glWindowPos3s(x, y, z);
}

void glWindowPos3sv(const GLshort * v)
{
    return gl::glWindowPos3sv(v);
}


} // namespace gl31
