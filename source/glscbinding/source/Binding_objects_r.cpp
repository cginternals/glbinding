
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");



} // namespace glscbinding
