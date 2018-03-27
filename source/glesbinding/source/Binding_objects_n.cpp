
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint, GLintptr, GLsizeiptr, GLeglClientBufferEXT, MapBufferUsageMask> Binding::NamedBufferStorageExternalEXT("glNamedBufferStorageExternalEXT");
Function<void, GLuint, GLsizeiptr, GLuint, GLuint64> Binding::NamedBufferStorageMemEXT("glNamedBufferStorageMemEXT");
Function<void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");



} // namespace glesbinding
