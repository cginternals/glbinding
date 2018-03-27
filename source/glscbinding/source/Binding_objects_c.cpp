
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
Function<void, ClearBufferMask> Binding::Clear("glClear");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
Function<void, GLfloat> Binding::ClearDepthf("glClearDepthf");
Function<void, GLint> Binding::ClearStencil("glClearStencil");
Function<void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
Function<GLuint> Binding::CreateProgram("glCreateProgram");
Function<void, GLenum> Binding::CullFace("glCullFace");



} // namespace glscbinding
