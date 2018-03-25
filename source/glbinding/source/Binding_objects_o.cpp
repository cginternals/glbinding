
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabel("glObjectLabel");
Function<Binding, void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabel("glObjectPtrLabel");
Function<Binding, GLenum, GLenum, GLuint, GLenum> Binding::ObjectPurgeableAPPLE("glObjectPurgeableAPPLE");
Function<Binding, GLenum, GLenum, GLuint, GLenum> Binding::ObjectUnpurgeableAPPLE("glObjectUnpurgeableAPPLE");
Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Ortho("glOrtho");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::OrthofOES("glOrthofOES");
Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::OrthoxOES("glOrthoxOES");



} // namespace glbinding
