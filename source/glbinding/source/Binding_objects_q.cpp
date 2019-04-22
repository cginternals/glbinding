
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<void, GLuint, GLenum> Binding::QueryCounter("glQueryCounter");
Function<GLbitfield, GLfixed *, GLint *> Binding::QueryMatrixxOES("glQueryMatrixxOES");
Function<void, GLenum, GLuint, GLenum, GLuint> Binding::QueryObjectParameteruiAMD("glQueryObjectParameteruiAMD");
Function<GLint, GLenum, GLint, GLuint, GLint *> Binding::QueryResourceNV("glQueryResourceNV");
Function<void, GLint, const GLchar *> Binding::QueryResourceTagNV("glQueryResourceTagNV");



} // namespace glbinding
