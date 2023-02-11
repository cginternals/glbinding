
#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/nogl.h>
#include <glbinding/gl/types.h>


namespace gl
{


GLBINDING_API void glConvolutionParameteri(GLenum target, GLenum pname, GLenum params);
GLBINDING_API void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLenum params);

GLBINDING_API void glFogi(GLenum pname, GLenum param);
GLBINDING_API void glFogiv(GLenum pname, const GLenum * params);

GLBINDING_API void glGetBufferParameteriv(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetBufferParameterivARB(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetBufferParameteriv(GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetBufferParameterivARB(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetIntegerv(GLenum pname, GLenum * data);
GLBINDING_API void glGetIntegeri_v(GLenum target, GLuint index, GLenum * data);

GLBINDING_API void glGetIntegerv(GLenum pname, ContextFlagMask * data);

GLBINDING_API void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLenum * params);
GLBINDING_API void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLenum * params);

GLBINDING_API void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLboolean * params);

GLBINDING_API void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLboolean * params);
GLBINDING_API void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLboolean * params);
GLBINDING_API void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLenum * params);
GLBINDING_API void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLenum * params);

GLBINDING_API void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLenum * params);
GLBINDING_API void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLenum * params);

GLBINDING_API void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLboolean * param);
GLBINDING_API void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLboolean * params);

GLBINDING_API void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLenum * params);
GLBINDING_API void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLenum * params);

GLBINDING_API void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLenum * params);

GLBINDING_API void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLboolean * params);
GLBINDING_API void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLenum * params);

GLBINDING_API void glGetProgramiv(GLuint program, GLenum pname, GLboolean * params);
GLBINDING_API void glGetProgramivARB(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetProgramiv(GLuint program, GLenum pname, GLenum * params);
GLBINDING_API void glGetProgramivARB(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLenum * params);

GLBINDING_API void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLboolean * params);

GLBINDING_API void glGetQueryObjectiv(GLuint id, GLenum pname, GLboolean * params);
GLBINDING_API void glGetQueryObjectivARB(GLuint id, GLenum pname, GLboolean * params);

GLBINDING_API void glGetQueryiv(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetQueryivARB(GLenum target, GLenum pname, GLboolean * params);

GLBINDING_API void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLenum * params);
GLBINDING_API void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLenum * params);

GLBINDING_API void glGetShaderiv(GLuint shader, GLenum pname, GLboolean * params);
GLBINDING_API void glGetShaderiv(GLuint shader, GLenum pname, GLenum * params);

GLBINDING_API void glGetTexEnviv(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTexEnviv(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetTexGeniv(GLenum coord, GLenum pname, GLenum * params);

GLBINDING_API void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLenum * params);

GLBINDING_API void glGetTexParameterIiv(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTexParameteriv(GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTexParameterIiv(GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetTexParameteriv(GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLenum * params);
GLBINDING_API void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLenum * params);

GLBINDING_API void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTextureParameteriv(GLuint texture, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLboolean * params);
GLBINDING_API void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLenum * params);
GLBINDING_API void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLenum * params);
GLBINDING_API void glGetTextureParameteriv(GLuint texture, GLenum pname, GLenum * params);
GLBINDING_API void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLenum * params);

GLBINDING_API void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLboolean * param);

GLBINDING_API void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLboolean * param);
GLBINDING_API void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLenum * param);

GLBINDING_API void glGetVertexAttribIiv(GLuint index, GLenum pname, GLboolean * params);
GLBINDING_API void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLboolean * params);
GLBINDING_API void glGetVertexAttribiv(GLuint index, GLenum pname, GLboolean * params);
GLBINDING_API void glGetVertexAttribivARB(GLuint index, GLenum pname, GLboolean * params);
GLBINDING_API void glGetVertexAttribIiv(GLuint index, GLenum pname, GLenum * params);
GLBINDING_API void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLenum * params);
GLBINDING_API void glGetVertexAttribiv(GLuint index, GLenum pname, GLenum * params);
GLBINDING_API void glGetVertexAttribivARB(GLuint index, GLenum pname, GLenum * params);

GLBINDING_API void glLightModeli(GLenum pname, GLenum param);
GLBINDING_API void glLightModeliv(GLenum pname, const GLenum * params);

GLBINDING_API void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);

GLBINDING_API void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLboolean param);
GLBINDING_API void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLboolean param);

GLBINDING_API void glPixelStorei(GLenum pname, GLboolean param);

GLBINDING_API void glPixelTransferi(GLenum pname, GLboolean param);

GLBINDING_API void glPointParameteri(GLenum pname, GLenum param);
GLBINDING_API void glPointParameteriv(GLenum pname, const GLenum * params);

GLBINDING_API void glProgramParameteri(GLuint program, GLenum pname, GLboolean value);
GLBINDING_API void glProgramParameteriARB(GLuint program, GLenum pname, GLboolean value);
GLBINDING_API void glProgramParameteriEXT(GLuint program, GLenum pname, GLboolean value);

GLBINDING_API void glProgramUniform1i(GLuint program, GLint location, GLboolean v0);
GLBINDING_API void glProgramUniform1iEXT(GLuint program, GLint location, GLboolean v0);
GLBINDING_API void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform2i(GLuint program, GLint location, GLboolean v0, GLboolean v1);
GLBINDING_API void glProgramUniform2iEXT(GLuint program, GLint location, GLboolean v0, GLboolean v1);
GLBINDING_API void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform3i(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2);
GLBINDING_API void glProgramUniform3iEXT(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2);
GLBINDING_API void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform4i(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3);
GLBINDING_API void glProgramUniform4iEXT(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3);
GLBINDING_API void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value);

GLBINDING_API void glProgramUniform1i(GLuint program, GLint location, GLenum v0);
GLBINDING_API void glProgramUniform1iEXT(GLuint program, GLint location, GLenum v0);
GLBINDING_API void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform2i(GLuint program, GLint location, GLenum v0, GLenum v1);
GLBINDING_API void glProgramUniform2iEXT(GLuint program, GLint location, GLenum v0, GLenum v1);
GLBINDING_API void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform3i(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2);
GLBINDING_API void glProgramUniform3iEXT(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2);
GLBINDING_API void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform4i(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3);
GLBINDING_API void glProgramUniform4iEXT(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3);
GLBINDING_API void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value);

GLBINDING_API void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLenum * param);
GLBINDING_API void glSamplerParameteri(GLuint sampler, GLenum pname, GLenum param);
GLBINDING_API void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLenum * param);

GLBINDING_API void glTexEnvi(GLenum target, GLenum pname, GLboolean param);
GLBINDING_API void glTexEnviv(GLenum target, GLenum pname, const GLboolean * params);
GLBINDING_API void glTexEnvi(GLenum target, GLenum pname, GLenum param);
GLBINDING_API void glTexEnviv(GLenum target, GLenum pname, const GLenum * params);

GLBINDING_API void glTexGeni(GLenum coord, GLenum pname, GLenum param);
GLBINDING_API void glTexGeniv(GLenum coord, GLenum pname, const GLenum * params);

GLBINDING_API void glTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);

GLBINDING_API void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);

GLBINDING_API void glTexParameterIiv(GLenum target, GLenum pname, const GLboolean * params);
GLBINDING_API void glTexParameterIivEXT(GLenum target, GLenum pname, const GLboolean * params);
GLBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLboolean param);
GLBINDING_API void glTexParameteriv(GLenum target, GLenum pname, const GLboolean * params);
GLBINDING_API void glTexParameterIiv(GLenum target, GLenum pname, const GLenum * params);
GLBINDING_API void glTexParameterIivEXT(GLenum target, GLenum pname, const GLenum * params);
GLBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLenum param);
GLBINDING_API void glTexParameteriv(GLenum target, GLenum pname, const GLenum * params);

GLBINDING_API void glTextureParameterIiv(GLuint texture, GLenum pname, const GLboolean * params);
GLBINDING_API void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLboolean * params);
GLBINDING_API void glTextureParameteri(GLuint texture, GLenum pname, GLboolean param);
GLBINDING_API void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLboolean param);
GLBINDING_API void glTextureParameteriv(GLuint texture, GLenum pname, const GLboolean * param);
GLBINDING_API void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLboolean * params);
GLBINDING_API void glTextureParameterIiv(GLuint texture, GLenum pname, const GLenum * params);
GLBINDING_API void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLenum * params);
GLBINDING_API void glTextureParameteri(GLuint texture, GLenum pname, GLenum param);
GLBINDING_API void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLenum param);
GLBINDING_API void glTextureParameteriv(GLuint texture, GLenum pname, const GLenum * param);
GLBINDING_API void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLenum * params);

GLBINDING_API void glUniform1i(GLint location, GLboolean v0);
GLBINDING_API void glUniform1iARB(GLint location, GLboolean v0);
GLBINDING_API void glUniform1iv(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform1ivARB(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform2i(GLint location, GLboolean v0, GLboolean v1);
GLBINDING_API void glUniform2iARB(GLint location, GLboolean v0, GLboolean v1);
GLBINDING_API void glUniform2iv(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform2ivARB(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform3i(GLint location, GLboolean v0, GLboolean v1, GLboolean v2);
GLBINDING_API void glUniform3iARB(GLint location, GLboolean v0, GLboolean v1, GLboolean v2);
GLBINDING_API void glUniform3iv(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform3ivARB(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform4i(GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3);
GLBINDING_API void glUniform4iARB(GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3);
GLBINDING_API void glUniform4iv(GLint location, GLsizei count, const GLboolean * value);
GLBINDING_API void glUniform4ivARB(GLint location, GLsizei count, const GLboolean * value);

GLBINDING_API void glUniform1i(GLint location, GLenum v0);
GLBINDING_API void glUniform1iARB(GLint location, GLenum v0);
GLBINDING_API void glUniform1iv(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform1ivARB(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform2i(GLint location, GLenum v0, GLenum v1);
GLBINDING_API void glUniform2iARB(GLint location, GLenum v0, GLenum v1);
GLBINDING_API void glUniform2iv(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform2ivARB(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform3i(GLint location, GLenum v0, GLenum v1, GLenum v2);
GLBINDING_API void glUniform3iARB(GLint location, GLenum v0, GLenum v1, GLenum v2);
GLBINDING_API void glUniform3iv(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform3ivARB(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform4i(GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3);
GLBINDING_API void glUniform4iARB(GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3);
GLBINDING_API void glUniform4iv(GLint location, GLsizei count, const GLenum * value);
GLBINDING_API void glUniform4ivARB(GLint location, GLsizei count, const GLenum * value);


} // namespace gl
