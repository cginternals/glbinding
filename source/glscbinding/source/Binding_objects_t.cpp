
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
Function<void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
Function<void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
Function<void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");



} // namespace glscbinding
