
#pragma once


#include <glscbinding/glscbinding_api.h>

#include <glscbinding/nogl.h>
#include <glscbinding/glsc/types.h>


namespace glsc
{



GLSCBINDING_API void glActiveTexture(GLenum texture);

GLSCBINDING_API void glBindBuffer(GLenum target, GLuint buffer);
GLSCBINDING_API void glBindFramebuffer(GLenum target, GLuint framebuffer);
GLSCBINDING_API void glBindRenderbuffer(GLenum target, GLuint renderbuffer);
GLSCBINDING_API void glBindTexture(GLenum target, GLuint texture);
GLSCBINDING_API void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLSCBINDING_API void glBlendEquation(GLenum mode);
GLSCBINDING_API void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
GLSCBINDING_API void glBlendFunc(GLenum sfactor, GLenum dfactor);
GLSCBINDING_API void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLSCBINDING_API void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage);
GLSCBINDING_API void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);

GLSCBINDING_API GLenum glCheckFramebufferStatus(GLenum target);
GLSCBINDING_API void glClear(ClearBufferMask mask);
GLSCBINDING_API void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLSCBINDING_API void glClearDepthf(GLfloat d);
GLSCBINDING_API void glClearStencil(GLint s);
GLSCBINDING_API void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLSCBINDING_API void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
GLSCBINDING_API GLuint glCreateProgram();
GLSCBINDING_API void glCullFace(GLenum mode);

GLSCBINDING_API void glDepthFunc(GLenum func);
GLSCBINDING_API void glDepthMask(GLboolean flag);
GLSCBINDING_API void glDepthRangef(GLfloat n, GLfloat f);
GLSCBINDING_API void glDisable(GLenum cap);
GLSCBINDING_API void glDisableVertexAttribArray(GLuint index);
GLSCBINDING_API void glDrawArrays(GLenum mode, GLint first, GLsizei count);
GLSCBINDING_API void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);

GLSCBINDING_API void glEnable(GLenum cap);
GLSCBINDING_API void glEnableVertexAttribArray(GLuint index);

GLSCBINDING_API void glFinish();
GLSCBINDING_API void glFlush();
GLSCBINDING_API void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLSCBINDING_API void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLSCBINDING_API void glFrontFace(GLenum mode);

GLSCBINDING_API void glGenBuffers(GLsizei n, GLuint * buffers);
GLSCBINDING_API void glGenFramebuffers(GLsizei n, GLuint * framebuffers);
GLSCBINDING_API void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers);
GLSCBINDING_API void glGenTextures(GLsizei n, GLuint * textures);
GLSCBINDING_API void glGenerateMipmap(GLenum target);
GLSCBINDING_API GLint glGetAttribLocation(GLuint program, const GLchar * name);
GLSCBINDING_API void glGetBooleanv(GLenum pname, GLboolean * data);
GLSCBINDING_API void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);
GLSCBINDING_API GLenum glGetError();
GLSCBINDING_API void glGetFloatv(GLenum pname, GLfloat * data);
GLSCBINDING_API void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params);
GLSCBINDING_API GLenum glGetGraphicsResetStatus();
GLSCBINDING_API void glGetIntegerv(GLenum pname, GLint * data);
GLSCBINDING_API void glGetProgramiv(GLuint program, GLenum pname, GLint * params);
GLSCBINDING_API void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params);
GLSCBINDING_API const GLubyte * glGetString(GLenum name);
GLSCBINDING_API void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
GLSCBINDING_API void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
GLSCBINDING_API GLint glGetUniformLocation(GLuint program, const GLchar * name);
GLSCBINDING_API void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer);
GLSCBINDING_API void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params);
GLSCBINDING_API void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params);
GLSCBINDING_API void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
GLSCBINDING_API void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params);

GLSCBINDING_API void glHint(GLenum target, GLenum mode);

GLSCBINDING_API GLboolean glIsEnabled(GLenum cap);



GLSCBINDING_API void glLineWidth(GLfloat width);




GLSCBINDING_API void glPixelStorei(GLenum pname, GLint param);
GLSCBINDING_API void glPolygonOffset(GLfloat factor, GLfloat units);
GLSCBINDING_API void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);


GLSCBINDING_API void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
GLSCBINDING_API void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);

GLSCBINDING_API void glSampleCoverage(GLfloat value, GLboolean invert);
GLSCBINDING_API void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
GLSCBINDING_API void glStencilFunc(GLenum func, GLint ref, GLuint mask);
GLSCBINDING_API void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
GLSCBINDING_API void glStencilMask(GLuint mask);
GLSCBINDING_API void glStencilMaskSeparate(GLenum face, GLuint mask);
GLSCBINDING_API void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
GLSCBINDING_API void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);

GLSCBINDING_API void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
GLSCBINDING_API void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
GLSCBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLint param);
GLSCBINDING_API void glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
GLSCBINDING_API void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLSCBINDING_API void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);

GLSCBINDING_API void glUniform1f(GLint location, GLfloat v0);
GLSCBINDING_API void glUniform1fv(GLint location, GLsizei count, const GLfloat * value);
GLSCBINDING_API void glUniform1i(GLint location, GLint v0);
GLSCBINDING_API void glUniform1iv(GLint location, GLsizei count, const GLint * value);
GLSCBINDING_API void glUniform2f(GLint location, GLfloat v0, GLfloat v1);
GLSCBINDING_API void glUniform2fv(GLint location, GLsizei count, const GLfloat * value);
GLSCBINDING_API void glUniform2i(GLint location, GLint v0, GLint v1);
GLSCBINDING_API void glUniform2iv(GLint location, GLsizei count, const GLint * value);
GLSCBINDING_API void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLSCBINDING_API void glUniform3fv(GLint location, GLsizei count, const GLfloat * value);
GLSCBINDING_API void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2);
GLSCBINDING_API void glUniform3iv(GLint location, GLsizei count, const GLint * value);
GLSCBINDING_API void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLSCBINDING_API void glUniform4fv(GLint location, GLsizei count, const GLfloat * value);
GLSCBINDING_API void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLSCBINDING_API void glUniform4iv(GLint location, GLsizei count, const GLint * value);
GLSCBINDING_API void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLSCBINDING_API void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLSCBINDING_API void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLSCBINDING_API void glUseProgram(GLuint program);

GLSCBINDING_API void glVertexAttrib1f(GLuint index, GLfloat x);
GLSCBINDING_API void glVertexAttrib1fv(GLuint index, const GLfloat * v);
GLSCBINDING_API void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
GLSCBINDING_API void glVertexAttrib2fv(GLuint index, const GLfloat * v);
GLSCBINDING_API void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLSCBINDING_API void glVertexAttrib3fv(GLuint index, const GLfloat * v);
GLSCBINDING_API void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLSCBINDING_API void glVertexAttrib4fv(GLuint index, const GLfloat * v);
GLSCBINDING_API void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
GLSCBINDING_API void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);







} // namespace glsc


// Include function patches due to dinstinguished types GLint, GLuint, GLenum, and GLboolean
#include <glscbinding/glsc/functions-patches.h>
