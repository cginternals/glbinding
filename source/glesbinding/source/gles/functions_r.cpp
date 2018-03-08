
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return Binding::RasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadBuffer(GLenum src)
{
    return Binding::ReadBuffer(src);
}

void glReadBufferIndexedEXT(GLenum src, GLint index)
{
    return Binding::ReadBufferIndexedEXT(src, index);
}

void glReadBufferNV(GLenum mode)
{
    return Binding::ReadBufferNV(mode);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return Binding::ReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

GLboolean glReleaseKeyedMutexWin32EXT(GLuint memory, GLuint64 key)
{
    return Binding::ReleaseKeyedMutexWin32EXT(memory, key);
}

void glReleaseShaderCompiler()
{
    return Binding::ReleaseShaderCompiler();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void glResolveDepthValuesNV()
{
    return Binding::ResolveDepthValuesNV();
}

void glResolveMultisampleFramebufferAPPLE()
{
    return Binding::ResolveMultisampleFramebufferAPPLE();
}

void glResumeTransformFeedback()
{
    return Binding::ResumeTransformFeedback();
}




} // namespace gles
