
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLuint, GLenum> Binding::QueryCounter("glQueryCounter");
Function<Binding, GLbitfield, GLfixed *, GLint *> Binding::QueryMatrixxOES("glQueryMatrixxOES");
Function<Binding, void, GLenum, GLuint, GLenum, GLuint> Binding::QueryObjectParameteruiAMD("glQueryObjectParameteruiAMD");
Function<Binding, GLint, GLenum, GLint, GLuint, GLint *> Binding::QueryResourceNV("glQueryResourceNV");
Function<Binding, void, GLint, const GLchar *> Binding::QueryResourceTagNV("glQueryResourceTagNV");



} // namespace glbinding
