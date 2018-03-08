
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void> Binding::Finish("glFinish");
Function<void> Binding::Flush("glFlush");
Function<void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
Function<void, GLenum> Binding::FrontFace("glFrontFace");



} // namespace glscbinding
