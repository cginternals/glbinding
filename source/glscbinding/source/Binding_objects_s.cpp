
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
Function<void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
Function<void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
Function<void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
Function<void, GLuint> Binding::StencilMask("glStencilMask");
Function<void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
Function<void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");



} // namespace glscbinding
