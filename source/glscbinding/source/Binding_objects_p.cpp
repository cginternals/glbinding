
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLenum, GLint> Binding::PixelStorei("glPixelStorei");
Function<void, GLfloat, GLfloat> Binding::PolygonOffset("glPolygonOffset");
Function<void, GLuint, GLenum, const void *, GLsizei> Binding::ProgramBinary("glProgramBinary");



} // namespace glscbinding
