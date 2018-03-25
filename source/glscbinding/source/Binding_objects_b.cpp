
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
Function<Binding, void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
Function<Binding, void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
Function<Binding, void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
Function<Binding, void, GLenum> Binding::BlendEquation("glBlendEquation");
Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
Function<Binding, void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
Function<Binding, void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");



} // namespace glscbinding
