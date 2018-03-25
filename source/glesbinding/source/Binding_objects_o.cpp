
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabel("glObjectLabel");
Function<Binding, void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabel("glObjectPtrLabel");



} // namespace glesbinding
