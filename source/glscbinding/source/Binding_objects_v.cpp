
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLuint, GLfloat> Binding::VertexAttrib1f("glVertexAttrib1f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib1fv("glVertexAttrib1fv");
Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2f("glVertexAttrib2f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib2fv("glVertexAttrib2fv");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3f("glVertexAttrib3f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib3fv("glVertexAttrib3fv");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4f("glVertexAttrib4f");
Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib4fv("glVertexAttrib4fv");
Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointer("glVertexAttribPointer");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Viewport("glViewport");



} // namespace glscbinding
