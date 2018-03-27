
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLenum> Binding::DepthFunc("glDepthFunc");
Function<void, GLboolean> Binding::DepthMask("glDepthMask");
Function<void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
Function<void, GLenum> Binding::Disable("glDisable");
Function<void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
Function<void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");



} // namespace glscbinding
