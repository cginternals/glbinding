#include <glbinding/gl/functions32core.h>

#include <glbinding/Binding.h>


namespace gl32core
{

void glActiveTexture(GLenum texture)
{
    return glbinding::Binding::ActiveTexture(texture);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::AttachShader(program, shader);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::Binding::BeginConditionalRender(id, mode);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::Binding::BeginQuery(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::Binding::BeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::Binding::BindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocation(program, color, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::Binding::BindTexture(target, texture);
}

void glBindVertexArray(GLuint array)
{
    return glbinding::Binding::BindVertexArray(array);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glbinding::Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::BufferSubData(target, offset, size, data);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl32core::GLenum>(glbinding::Binding::CheckFramebufferStatus(target));
}

void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::Binding::ClampColor(target, clamp);
}

void glClear(ClearBufferMask mask)
{
    return glbinding::Binding::Clear(mask);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return glbinding::Binding::ClearDepth(depth);
}

void glClearStencil(GLint s)
{
    return glbinding::Binding::ClearStencil(s);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return static_cast<gl32core::GLenum>(glbinding::Binding::ClientWaitSync(sync, flags, timeout));
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::Binding::ColorMaski(index, r, g, b, a);
}

void glCompileShader(GLuint shader)
{
    return glbinding::Binding::CompileShader(shader);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLuint glCreateProgram()
{
    return glbinding::Binding::CreateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return glbinding::Binding::CreateShader(type);
}

void glCullFace(GLenum mode)
{
    return glbinding::Binding::CullFace(mode);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::Binding::DeleteBuffers(n, buffers);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeleteProgram(GLuint program)
{
    return glbinding::Binding::DeleteProgram(program);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteQueries(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteShader(GLuint shader)
{
    return glbinding::Binding::DeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return glbinding::Binding::DeleteSync(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::Binding::DeleteTextures(n, textures);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::Binding::DeleteVertexArrays(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glbinding::Binding::DepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::Binding::DepthRange(near_, far_);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::DetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glbinding::Binding::Disable(cap);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::Binding::DisableVertexAttribArray(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return glbinding::Binding::Disablei(target, index);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawBuffer(GLenum buf)
{
    return glbinding::Binding::DrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::DrawBuffers(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glbinding::Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glEnable(GLenum cap)
{
    return glbinding::Binding::Enable(cap);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::Binding::EnableVertexAttribArray(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return glbinding::Binding::Enablei(target, index);
}

void glEndConditionalRender()
{
    return glbinding::Binding::EndConditionalRender();
}

void glEndQuery(GLenum target)
{
    return glbinding::Binding::EndQuery(target);
}

void glEndTransformFeedback()
{
    return glbinding::Binding::EndTransformFeedback();
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glbinding::Binding::FenceSync(condition, flags);
}

void glFinish()
{
    return glbinding::Binding::Finish();
}

void glFlush()
{
    return glbinding::Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::Binding::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFrontFace(GLenum mode)
{
    return glbinding::Binding::FrontFace(mode);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::GenBuffers(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::GenFramebuffers(n, framebuffers);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenQueries(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::Binding::GenTextures(n, textures);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::GenVertexArrays(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return glbinding::Binding::GenerateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::Binding::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetBufferSubData(target, offset, size, data);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::Binding::GetCompressedTexImage(target, level, img);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::Binding::GetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl32core::GLenum>(glbinding::Binding::GetError());
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::Binding::GetFloatv(pname, data);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::Binding::GetInteger64v(pname, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::Binding::GetIntegerv(pname, data);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::Binding::GetMultisamplefv(pname, index, val);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryiv(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glbinding::Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::Binding::GetStringi(name, index);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::Binding::GetSynciv(sync, pname, bufSize, length, values);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameteriv(target, pname, params);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetUniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::Binding::GetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::Binding::GetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glbinding::Binding::Hint(target, mode);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::Binding::IsEnabledi(target, index);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsProgram(GLuint program)
{
    return glbinding::Binding::IsProgram(program);
}

GLboolean glIsQuery(GLuint id)
{
    return glbinding::Binding::IsQuery(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsShader(GLuint shader)
{
    return glbinding::Binding::IsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return glbinding::Binding::IsSync(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glbinding::Binding::IsTexture(texture);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::Binding::IsVertexArray(array);
}

void glLineWidth(GLfloat width)
{
    return glbinding::Binding::LineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glbinding::Binding::LinkProgram(program);
}

void glLogicOp(GLenum opcode)
{
    return glbinding::Binding::LogicOp(opcode);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::Binding::MapBuffer(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::Binding::MapBufferRange(target, offset, length, access);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::Binding::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelStorei(pname, param);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterf(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfv(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::Binding::PointParameteri(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PointParameteriv(pname, params);
}

void glPointSize(GLfloat size)
{
    return glbinding::Binding::PointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::Binding::PolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::Binding::PolygonOffset(factor, units);
}

void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::Binding::PrimitiveRestartIndex(index);
}

void glProvokingVertex(GLenum mode)
{
    return glbinding::Binding::ProvokingVertex(mode);
}

void glReadBuffer(GLenum src)
{
    return glbinding::Binding::ReadBuffer(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::Binding::SampleMaski(maskNumber, mask);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Scissor(x, y, width, height);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::Binding::ShaderSource(shader, count, string, length);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBuffer(target, internalformat, buffer);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameterIiv(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TexParameterIuiv(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameteriv(target, pname, params);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::Binding::Uniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return glbinding::Binding::Uniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::Binding::Uniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform1uiv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::Uniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::Uniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::Uniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform2uiv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::Uniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::Uniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::Uniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform3uiv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::Uniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::Uniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::Uniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::Binding::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4x3fv(location, count, transpose, value);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::Binding::UnmapBuffer(target);
}

void glUseProgram(GLuint program)
{
    return glbinding::Binding::UseProgram(program);
}

void glValidateProgram(GLuint program)
{
    return glbinding::Binding::ValidateProgram(program);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttrib1d(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib1dv(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::Binding::VertexAttrib1s(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib1sv(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttrib2d(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib2dv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::Binding::VertexAttrib2s(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib2sv(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib3dv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::VertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib3sv(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4Nbv(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4Niv(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4Nsv(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::Binding::VertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4Nubv(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4Nusv(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4bv(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib4dv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib4fv(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4iv(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::VertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4sv(index, v);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4ubv(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4uiv(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4usv(index, v);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::Binding::VertexAttribI1i(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI1iv(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::Binding::VertexAttribI1ui(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI1uiv(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::Binding::VertexAttribI2i(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI2iv(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::Binding::VertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI2uiv(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::Binding::VertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI3iv(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::Binding::VertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI3uiv(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttribI4bv(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttribI4sv(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttribI4ubv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttribI4usv(index, v);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Viewport(x, y, width, height);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glbinding::Binding::WaitSync(sync, flags, timeout);
}


} // namespace gl32core
