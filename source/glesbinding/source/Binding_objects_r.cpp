
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
Function<void, GLenum> Binding::ReadBuffer("glReadBuffer");
Function<void, GLenum, GLint> Binding::ReadBufferIndexedEXT("glReadBufferIndexedEXT");
Function<void, GLenum> Binding::ReadBufferNV("glReadBufferNV");
Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsEXT("glReadnPixelsEXT");
Function<GLboolean, GLuint, GLuint64> Binding::ReleaseKeyedMutexWin32EXT("glReleaseKeyedMutexWin32EXT");
Function<void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
Function<void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleANGLE("glRenderbufferStorageMultisampleANGLE");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleAPPLE("glRenderbufferStorageMultisampleAPPLE");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleIMG("glRenderbufferStorageMultisampleIMG");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleNV("glRenderbufferStorageMultisampleNV");
Function<void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
Function<void> Binding::ResolveMultisampleFramebufferAPPLE("glResolveMultisampleFramebufferAPPLE");
Function<void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");



} // namespace glesbinding
