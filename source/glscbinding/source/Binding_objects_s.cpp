
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
Function<Binding, void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
Function<Binding, void, GLuint> Binding::StencilMask("glStencilMask");
Function<Binding, void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
Function<Binding, void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");



} // namespace glscbinding
