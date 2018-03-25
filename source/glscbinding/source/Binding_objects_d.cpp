
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLenum> Binding::DepthFunc("glDepthFunc");
Function<Binding, void, GLboolean> Binding::DepthMask("glDepthMask");
Function<Binding, void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
Function<Binding, void, GLenum> Binding::Disable("glDisable");
Function<Binding, void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");



} // namespace glscbinding
