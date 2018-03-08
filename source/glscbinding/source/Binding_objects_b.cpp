
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
Function<void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
Function<void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
Function<void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
Function<void, GLenum> Binding::BlendEquation("glBlendEquation");
Function<void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
Function<void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
Function<void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
Function<void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");



} // namespace glscbinding
