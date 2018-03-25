
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void> Binding::Finish("glFinish");
Function<Binding, void> Binding::Flush("glFlush");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
Function<Binding, void, GLenum> Binding::FrontFace("glFrontFace");



} // namespace glscbinding
