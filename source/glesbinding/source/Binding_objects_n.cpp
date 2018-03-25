
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint, GLintptr, GLsizeiptr, GLeglClientBufferEXT, MapBufferUsageMask> Binding::NamedBufferStorageExternalEXT("glNamedBufferStorageExternalEXT");
Function<Binding, void, GLuint, GLsizeiptr, GLuint, GLuint64> Binding::NamedBufferStorageMemEXT("glNamedBufferStorageMemEXT");
Function<Binding, void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");



} // namespace glesbinding
