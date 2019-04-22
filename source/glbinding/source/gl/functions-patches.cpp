
#include <glbinding/gl/functions-patches.h>

#include <vector>

#include <glbinding/gl/functions.h>


namespace gl
{


void glConvolutionParameteri(GLenum target, GLenum pname, GLenum params)
{
    glConvolutionParameteri(target, pname, static_cast<GLint>(params));
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLenum params)
{
    glConvolutionParameteriEXT(target, pname, static_cast<GLint>(params));
}

void glFogi(GLenum pname, GLenum param)
{
    glFogi(pname, static_cast<GLint>(param));
}

void glFogiv(GLenum pname, const GLenum * params)
{
    glFogiv(pname, reinterpret_cast<const GLint *>(params));
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetBufferParameteriv(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetBufferParameterivARB(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLenum * params)
{
    glGetBufferParameteriv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLenum * params)
{
    glGetBufferParameterivARB(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLenum * params)
{
    glGetConvolutionParameteriv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLenum * params)
{
    glGetConvolutionParameterivEXT(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetIntegerv(GLenum pname, GLenum * data)
{
    glGetIntegerv(pname, reinterpret_cast<GLint *>(data));
}

void glGetIntegeri_v(GLenum target, GLuint index, GLenum * data)
{
    glGetIntegeri_v(target, index, reinterpret_cast<GLint *>(data));
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLenum * params)
{
    glGetFramebufferAttachmentParameteriv(target, attachment, pname, reinterpret_cast<GLint *>(params));
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLenum * params)
{
    glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, reinterpret_cast<GLint *>(params));
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetFramebufferParameteriv(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetFramebufferParameterivEXT(framebuffer, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLenum * params)
{
    glGetMinmaxParameteriv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLenum * params)
{
    glGetMinmaxParameterivEXT(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetNamedBufferParameteriv(buffer, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetNamedBufferParameterivEXT(buffer, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLenum * params)
{
    glGetNamedBufferParameteriv(buffer, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLenum * params)
{
    glGetNamedBufferParameterivEXT(buffer, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLenum * params)
{
    glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLenum * params)
{
    glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLboolean * param)
{
    GLint params_;

    glGetNamedFramebufferParameteriv(framebuffer, pname, &params_);

    param[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetNamedFramebufferParameterivEXT(framebuffer, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetNamedProgramivEXT(program, target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLenum * params)
{
    glGetNamedProgramivEXT(program, target, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLenum * params)
{
    glGetNamedRenderbufferParameteriv(renderbuffer, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLenum * params)
{
    glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, reinterpret_cast<GLint *>(params));
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLenum * params)
{
    glGetNamedStringivARB(namelen, name, pname, reinterpret_cast<GLint *>(params));
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetObjectParameterivARB(obj, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLenum * params)
{
    glGetObjectParameterivARB(obj, pname, reinterpret_cast<GLint *>(params));
}

void glGetProgramiv(GLuint program, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetProgramiv(program, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetProgramivARB(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetProgramiv(GLuint program, GLenum pname, GLenum * params)
{
    glGetProgramiv(program, pname, reinterpret_cast<GLint *>(params));
}

void glGetProgramivARB(GLenum target, GLenum pname, GLenum * params)
{
    glGetProgramivARB(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLenum * params)
{
    glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, reinterpret_cast<GLint *>(params));
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetQueryIndexediv(target, index, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetQueryObjectiv(id, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetQueryObjectivARB(id, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetQueryiv(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetQueryiv(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetQueryivARB(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLenum * params)
{
    glGetRenderbufferParameteriv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLenum * params)
{
    glGetRenderbufferParameterivEXT(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLenum * params)
{
    glGetSamplerParameterIiv(sampler, pname, reinterpret_cast<GLint *>(params));
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLenum * params)
{
    glGetSamplerParameteriv(sampler, pname, reinterpret_cast<GLint *>(params));
}

void glGetShaderiv(GLuint shader, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetShaderiv(shader, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLenum * params)
{
    glGetShaderiv(shader, pname, reinterpret_cast<GLint *>(params));
}

void glGetTexEnviv(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTexEnviv(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLenum * params)
{
    glGetTexEnviv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLenum * params)
{
    glGetTexGeniv(coord, pname, reinterpret_cast<GLint *>(params));
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTexLevelParameteriv(target, level, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLenum * params)
{
    glGetTexLevelParameteriv(target, level, pname, reinterpret_cast<GLint *>(params));
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTexParameterIiv(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTexParameterIivEXT(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTexParameteriv(target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLenum * params)
{
    glGetTexParameterIiv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLenum * params)
{
    glGetTexParameterIivEXT(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLenum * params)
{
    glGetTexParameteriv(target, pname, reinterpret_cast<GLint *>(params));
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTextureLevelParameteriv(texture, level, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTextureLevelParameterivEXT(texture, target, level, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLenum * params)
{
    glGetTextureLevelParameteriv(texture, level, pname, reinterpret_cast<GLint *>(params));
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLenum * params)
{
    glGetTextureLevelParameterivEXT(texture, target, level, pname, reinterpret_cast<GLint *>(params));
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTextureParameterIiv(texture, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTextureParameterIivEXT(texture, target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTextureParameteriv(texture, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetTextureParameterivEXT(texture, target, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLenum * params)
{
    glGetTextureParameterIiv(texture, pname, reinterpret_cast<GLint *>(params));
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLenum * params)
{
    glGetTextureParameterIivEXT(texture, target, pname, reinterpret_cast<GLint *>(params));
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLenum * params)
{
    glGetTextureParameteriv(texture, pname, reinterpret_cast<GLint *>(params));
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLenum * params)
{
    glGetTextureParameterivEXT(texture, target, pname, reinterpret_cast<GLint *>(params));
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLboolean * param)
{
    GLint params_;

    glGetTransformFeedbackiv(xfb, pname, &params_);

    param[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLboolean * param)
{
    GLint params_;

    glGetVertexArrayIndexediv(vaobj, index, pname, &params_);

    param[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLenum * param)
{
    glGetVertexArrayIndexediv(vaobj, index, pname, reinterpret_cast<GLint *>(param));
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetVertexAttribIiv(index, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetVertexAttribIivEXT(index, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetVertexAttribiv(index, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLboolean * params)
{
    GLint params_;

    glGetVertexAttribivARB(index, pname, &params_);

    params[0] = static_cast<GLboolean>(params_ != 0);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLenum * params)
{
    glGetVertexAttribIiv(index, pname, reinterpret_cast<GLint *>(params));
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLenum * params)
{
    glGetVertexAttribIivEXT(index, pname, reinterpret_cast<GLint *>(params));
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLenum * params)
{
    glGetVertexAttribiv(index, pname, reinterpret_cast<GLint *>(params));
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLenum * params)
{
    glGetVertexAttribivARB(index, pname, reinterpret_cast<GLint *>(params));
}

void glLightModeli(GLenum pname, GLenum param)
{
    glLightModeli(pname, static_cast<GLint>(param));
}

void glLightModeliv(GLenum pname, const GLenum * params)
{
    glLightModeliv(pname, reinterpret_cast<const GLint *>(params));
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glMultiTexImage1DEXT(texunit, target, level, static_cast<GLint>(internalformat), width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glMultiTexImage2DEXT(texunit, target, level, static_cast<GLint>(internalformat), width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glMultiTexImage3DEXT(texunit, target, level, static_cast<GLint>(internalformat), width, height, depth, border, format, type, pixels);
}

void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLboolean param)
{
    glNamedFramebufferParameteri(framebuffer, pname, static_cast<GLint>(param));
}

void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLboolean param)
{
    glNamedFramebufferParameteriEXT(framebuffer, pname, static_cast<GLint>(param));
}

void glPixelStorei(GLenum pname, GLboolean param)
{
    glPixelStorei(pname, static_cast<GLint>(param));
}

void glPixelTransferi(GLenum pname, GLboolean param)
{
    glPixelTransferi(pname, static_cast<GLint>(param));
}

void glPointParameteri(GLenum pname, GLenum param)
{
    glPointParameteri(pname, static_cast<GLint>(param));
}

void glPointParameteriv(GLenum pname, const GLenum * params)
{
    glPointParameteriv(pname, reinterpret_cast<const GLint *>(params));
}

void glProgramParameteri(GLuint program, GLenum pname, GLboolean value)
{
    glProgramParameteri(program, pname, static_cast<GLint>(value));
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLboolean value)
{
    glProgramParameteriARB(program, pname, static_cast<GLint>(value));
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLboolean value)
{
    glProgramParameteriEXT(program, pname, static_cast<GLint>(value));
}

void glProgramUniform1i(GLuint program, GLint location, GLboolean v0)
{
    glProgramUniform1i(program, location, static_cast<GLint>(v0));
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLboolean v0)
{
    glProgramUniform1iEXT(program, location, static_cast<GLint>(v0));
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 1 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform1iv(program, location, count, data.data());
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 1 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform1ivEXT(program, location, count, data.data());
}

void glProgramUniform2i(GLuint program, GLint location, GLboolean v0, GLboolean v1)
{
    glProgramUniform2i(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLboolean v0, GLboolean v1)
{
    glProgramUniform2iEXT(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 2 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform2iv(program, location, count, data.data());
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 2 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform2ivEXT(program, location, count, data.data());
}

void glProgramUniform3i(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2)
{
    glProgramUniform3i(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2)
{
    glProgramUniform3iEXT(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 3 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform3iv(program, location, count, data.data());
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 3 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform3ivEXT(program, location, count, data.data());
}

void glProgramUniform4i(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3)
{
    glProgramUniform4i(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3)
{
    glProgramUniform4iEXT(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 4 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform4iv(program, location, count, data.data());
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 4 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glProgramUniform4ivEXT(program, location, count, data.data());
}

void glProgramUniform1i(GLuint program, GLint location, GLenum v0)
{
    glProgramUniform1i(program, location, static_cast<GLint>(v0));
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLenum v0)
{
    glProgramUniform1iEXT(program, location, static_cast<GLint>(v0));
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform1iv(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform1ivEXT(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform2i(GLuint program, GLint location, GLenum v0, GLenum v1)
{
    glProgramUniform2i(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLenum v0, GLenum v1)
{
    glProgramUniform2iEXT(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform2iv(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform2ivEXT(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform3i(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2)
{
    glProgramUniform3i(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2)
{
    glProgramUniform3iEXT(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform3iv(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform3ivEXT(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform4i(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3)
{
    glProgramUniform4i(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3)
{
    glProgramUniform4iEXT(program, location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform4iv(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLenum * value)
{
    glProgramUniform4ivEXT(program, location, count, reinterpret_cast<const GLint *>(value));
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLenum * param)
{
    glSamplerParameterIiv(sampler, pname, reinterpret_cast<const GLint *>(param));
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLenum param)
{
    glSamplerParameteri(sampler, pname, static_cast<GLint>(param));
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLenum * param)
{
    glSamplerParameteriv(sampler, pname, reinterpret_cast<const GLint *>(param));
}

void glTexEnvi(GLenum target, GLenum pname, GLboolean param)
{
    glTexEnvi(target, pname, static_cast<GLint>(param));
}

void glTexEnviv(GLenum target, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTexEnviv(target, pname, &params_);
}

void glTexEnvi(GLenum target, GLenum pname, GLenum param)
{
    glTexEnvi(target, pname, static_cast<GLint>(param));
}

void glTexEnviv(GLenum target, GLenum pname, const GLenum * params)
{
    glTexEnviv(target, pname, reinterpret_cast<const GLint *>(params));
}

void glTexGeni(GLenum coord, GLenum pname, GLenum param)
{
    glTexGeni(coord, pname, static_cast<GLint>(param));
}

void glTexGeniv(GLenum coord, GLenum pname, const GLenum * params)
{
    glTexGeniv(coord, pname, reinterpret_cast<const GLint *>(params));
}

void glTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTexImage1D(target, level, static_cast<GLint>(internalformat), width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTexImage2D(target, level, static_cast<GLint>(internalformat), width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTexImage3D(target, level, static_cast<GLint>(internalformat), width, height, depth, border, format, type, pixels);
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTextureImage1DEXT(texture, target, level, static_cast<GLint>(internalformat), width, border, format, type, pixels);
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTextureImage2DEXT(texture, target, level, static_cast<GLint>(internalformat), width, height, border, format, type, pixels);
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTextureImage3DEXT(texture, target, level, static_cast<GLint>(internalformat), width, height, depth, border, format, type, pixels);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTexParameterIiv(target, pname, &params_);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTexParameterIivEXT(target, pname, &params_);
}

void glTexParameteri(GLenum target, GLenum pname, GLboolean param)
{
    glTexParameteri(target, pname, static_cast<GLint>(param));
}

void glTexParameteriv(GLenum target, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTexParameteriv(target, pname, &params_);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLenum * params)
{
    glTexParameterIiv(target, pname, reinterpret_cast<const GLint *>(params));
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLenum * params)
{
    glTexParameterIivEXT(target, pname, reinterpret_cast<const GLint *>(params));
}

void glTexParameteri(GLenum target, GLenum pname, GLenum param)
{
    glTexParameteri(target, pname, static_cast<GLint>(param));
}

void glTexParameteriv(GLenum target, GLenum pname, const GLenum * params)
{
    glTexParameteriv(target, pname, reinterpret_cast<const GLint *>(params));
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTextureParameterIiv(texture, pname, &params_);
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTextureParameterIivEXT(texture, target, pname, &params_);
}

void glTextureParameteri(GLuint texture, GLenum pname, GLboolean param)
{
    glTextureParameteri(texture, pname, static_cast<GLint>(param));
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLboolean param)
{
    glTextureParameteriEXT(texture, target, pname, static_cast<GLint>(param));
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLboolean * param)
{
    GLint params_ = static_cast<GLint>(param[0]);

    glTextureParameteriv(texture, pname, &params_);
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLboolean * params)
{
    GLint params_ = static_cast<GLint>(params[0]);

    glTextureParameterivEXT(texture, target, pname, &params_);
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLenum * params)
{
    glTextureParameterIiv(texture, pname, reinterpret_cast<const GLint *>(params));
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLenum * params)
{
    glTextureParameterIivEXT(texture, target, pname, reinterpret_cast<const GLint *>(params));
}

void glTextureParameteri(GLuint texture, GLenum pname, GLenum param)
{
    glTextureParameteri(texture, pname, static_cast<GLint>(param));
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLenum param)
{
    glTextureParameteriEXT(texture, target, pname, static_cast<GLint>(param));
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLenum * param)
{
    glTextureParameteriv(texture, pname, reinterpret_cast<const GLint *>(param));
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLenum * params)
{
    glTextureParameterivEXT(texture, target, pname, reinterpret_cast<const GLint *>(params));
}

void glUniform1i(GLint location, GLboolean v0)
{
    glUniform1i(location, static_cast<GLint>(v0));
}

void glUniform1iARB(GLint location, GLboolean v0)
{
    glUniform1iARB(location, static_cast<GLint>(v0));
}

void glUniform1iv(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 1 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform1iv(location, count, data.data());
}

void glUniform1ivARB(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 1 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform1ivARB(location, count, data.data());
}

void glUniform2i(GLint location, GLboolean v0, GLboolean v1)
{
    glUniform2i(location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glUniform2iARB(GLint location, GLboolean v0, GLboolean v1)
{
    glUniform2iARB(location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glUniform2iv(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 2 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform2iv(location, count, data.data());
}

void glUniform2ivARB(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 2 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform2ivARB(location, count, data.data());
}

void glUniform3i(GLint location, GLboolean v0, GLboolean v1, GLboolean v2)
{
    glUniform3i(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glUniform3iARB(GLint location, GLboolean v0, GLboolean v1, GLboolean v2)
{
    glUniform3iARB(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glUniform3iv(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 3 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform3iv(location, count, data.data());
}

void glUniform3ivARB(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 3 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform3ivARB(location, count, data.data());
}

void glUniform4i(GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3)
{
    glUniform4i(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glUniform4iARB(GLint location, GLboolean v0, GLboolean v1, GLboolean v2, GLboolean v3)
{
    glUniform4iARB(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glUniform4iv(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 4 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform4iv(location, count, data.data());
}

void glUniform4ivARB(GLint location, GLsizei count, const GLboolean * value)
{
    const auto size = 4 * count;
    std::vector<GLint> data(size);

    for (auto i = 0; i < size; ++i)
    {
        data[i] = static_cast<GLint>(value[i]);
    }

    glUniform4ivARB(location, count, data.data());
}

void glUniform1i(GLint location, GLenum v0)
{
    glUniform1i(location, static_cast<GLint>(v0));
}

void glUniform1iARB(GLint location, GLenum v0)
{
    glUniform1iARB(location, static_cast<GLint>(v0));
}

void glUniform1iv(GLint location, GLsizei count, const GLenum * value)
{
    glUniform1iv(location, count, reinterpret_cast<const GLint *>(value));
}

void glUniform1ivARB(GLint location, GLsizei count, const GLenum * value)
{
    glUniform1ivARB(location, count, reinterpret_cast<const GLint *>(value));
}

void glUniform2i(GLint location, GLenum v0, GLenum v1)
{
    glUniform2i(location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glUniform2iARB(GLint location, GLenum v0, GLenum v1)
{
    glUniform2iARB(location, static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void glUniform2iv(GLint location, GLsizei count, const GLenum * value)
{
    glUniform2iv(location, count, reinterpret_cast<const GLint *>(value));
}

void glUniform2ivARB(GLint location, GLsizei count, const GLenum * value)
{
    glUniform2ivARB(location, count, reinterpret_cast<const GLint *>(value));
}

void glUniform3i(GLint location, GLenum v0, GLenum v1, GLenum v2)
{
    glUniform3i(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glUniform3iARB(GLint location, GLenum v0, GLenum v1, GLenum v2)
{
    glUniform3iARB(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void glUniform3iv(GLint location, GLsizei count, const GLenum * value)
{
    glUniform3iv(location, count, reinterpret_cast<const GLint *>(value));
}

void glUniform3ivARB(GLint location, GLsizei count, const GLenum * value)
{
    glUniform3ivARB(location, count, reinterpret_cast<const GLint *>(value));
}

void glUniform4i(GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3)
{
    glUniform4i(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glUniform4iARB(GLint location, GLenum v0, GLenum v1, GLenum v2, GLenum v3)
{
    glUniform4iARB(location, static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void glUniform4iv(GLint location, GLsizei count, const GLenum * value)
{
    glUniform4iv(location, count, reinterpret_cast<const GLint *>(value));
}


} // namespace gl
