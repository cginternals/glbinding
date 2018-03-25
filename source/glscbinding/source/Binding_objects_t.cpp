
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
Function<Binding, void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");



} // namespace glscbinding
