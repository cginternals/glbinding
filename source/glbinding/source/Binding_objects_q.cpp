
#include "Binding_pch.h"

using namespace gl;


namespace glbinding
{


Function<void, GLuint, GLenum> Binding::QueryCounter("glQueryCounter");
Function<GLbitfield, GLfixed *, GLint *> Binding::QueryMatrixxOES("glQueryMatrixxOES");
Function<void, GLenum, GLuint, GLenum, GLuint> Binding::QueryObjectParameteruiAMD("glQueryObjectParameteruiAMD");


} // namespace glbinding
