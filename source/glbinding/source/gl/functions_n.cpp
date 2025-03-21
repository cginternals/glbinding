
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glNamedBufferAttachMemoryNV(GLuint buffer, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::NamedBufferAttachMemoryNV(buffer, memory, offset);
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

void glNamedBufferPageCommitmentMemNV(GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit)
{
    return glbinding::Binding::NamedBufferPageCommitmentMemNV(buffer, offset, size, memory, memOffset, commit);
}

void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::NamedBufferStorage(buffer, size, data, flags);
}

void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::NamedBufferStorageEXT(buffer, size, data, flags);
}

void glNamedBufferStorageExternalEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, BufferStorageMask flags)
{
    return glbinding::Binding::NamedBufferStorageExternalEXT(buffer, offset, size, clientBuffer, flags);
}

void glNamedBufferStorageMemEXT(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::NamedBufferStorageMemEXT(buffer, size, memory, offset);
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

void glNamedFramebufferSampleLocationsfvARB(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::NamedFramebufferSampleLocationsfvARB(framebuffer, start, count, v);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::NamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glNamedFramebufferSamplePositionsfvAMD(GLuint framebuffer, GLuint numsamples, GLuint pixelindex, const GLfloat * values)
{
    return glbinding::Binding::NamedFramebufferSamplePositionsfvAMD(framebuffer, numsamples, pixelindex, values);
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

void glNamedFramebufferTextureMultiviewOVR(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return glbinding::Binding::NamedFramebufferTextureMultiviewOVR(framebuffer, attachment, texture, level, baseViewIndex, numViews);
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

void glNamedRenderbufferStorageMultisampleAdvancedAMD(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageMultisampleAdvancedAMD(renderbuffer, samples, storageSamples, internalformat, width, height);
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

void glNewList(GLuint list, GLenum mode)
{
    return glbinding::Binding::NewList(list, mode);
}

GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return glbinding::Binding::NewObjectBufferATI(size, pointer, usage);
}

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::Binding::Normal3b(nx, ny, nz);
}

void glNormal3bv(const GLbyte * v)
{
    return glbinding::Binding::Normal3bv(v);
}

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::Binding::Normal3d(nx, ny, nz);
}

void glNormal3dv(const GLdouble * v)
{
    return glbinding::Binding::Normal3dv(v);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::Binding::Normal3f(nx, ny, nz);
}

void glNormal3fv(const GLfloat * v)
{
    return glbinding::Binding::Normal3fv(v);
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

void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return glbinding::Binding::Normal3i(nx, ny, nz);
}

void glNormal3iv(const GLint * v)
{
    return glbinding::Binding::Normal3iv(v);
}

void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::Binding::Normal3s(nx, ny, nz);
}

void glNormal3sv(const GLshort * v)
{
    return glbinding::Binding::Normal3sv(v);
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

void glNormalP3ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::NormalP3ui(type, coords);
}

void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::NormalP3uiv(type, coords);
}

void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::NormalPointer(type, stride, pointer);
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


} // namespace gl