
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLenum, GLint> Binding::PixelStorei("glPixelStorei");
Function<Binding, void, GLfloat, GLfloat> Binding::PolygonOffset("glPolygonOffset");
Function<Binding, void, GLuint, GLenum, const void *, GLsizei> Binding::ProgramBinary("glProgramBinary");



} // namespace glscbinding
