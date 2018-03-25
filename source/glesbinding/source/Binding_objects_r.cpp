
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
Function<Binding, void, GLenum> Binding::ReadBuffer("glReadBuffer");
Function<Binding, void, GLenum, GLint> Binding::ReadBufferIndexedEXT("glReadBufferIndexedEXT");
Function<Binding, void, GLenum> Binding::ReadBufferNV("glReadBufferNV");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsEXT("glReadnPixelsEXT");
Function<Binding, GLboolean, GLuint, GLuint64> Binding::ReleaseKeyedMutexWin32EXT("glReleaseKeyedMutexWin32EXT");
Function<Binding, void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleANGLE("glRenderbufferStorageMultisampleANGLE");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleAPPLE("glRenderbufferStorageMultisampleAPPLE");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleIMG("glRenderbufferStorageMultisampleIMG");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleNV("glRenderbufferStorageMultisampleNV");
Function<Binding, void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
Function<Binding, void> Binding::ResolveMultisampleFramebufferAPPLE("glResolveMultisampleFramebufferAPPLE");
Function<Binding, void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");



} // namespace glesbinding
