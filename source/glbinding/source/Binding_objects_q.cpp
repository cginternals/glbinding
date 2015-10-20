#include <glbinding/Binding.h>

#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/boolean.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/values.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding 
{

Function<void, GLuint, GLenum> Binding::QueryCounter("glQueryCounter");
Function<GLbitfield, GLfixed *, GLint *> Binding::QueryMatrixxOES("glQueryMatrixxOES");
Function<void, GLenum, GLuint, GLenum, GLuint> Binding::QueryObjectParameteruiAMD("glQueryObjectParameteruiAMD");

} // namespace glbinding
