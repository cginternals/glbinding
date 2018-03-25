
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLenum> Binding::Enable("glEnable");
Function<Binding, void, GLuint> Binding::EnableVertexAttribArray("glEnableVertexAttribArray");



} // namespace glscbinding
