
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
Function<Binding, void, ClearBufferMask> Binding::Clear("glClear");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
Function<Binding, void, GLfloat> Binding::ClearDepthf("glClearDepthf");
Function<Binding, void, GLint> Binding::ClearStencil("glClearStencil");
Function<Binding, void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
Function<Binding, GLuint> Binding::CreateProgram("glCreateProgram");
Function<Binding, void, GLenum> Binding::CullFace("glCullFace");



} // namespace glscbinding
