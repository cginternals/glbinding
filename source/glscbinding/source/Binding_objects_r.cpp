
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
Function<void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");



} // namespace glscbinding
