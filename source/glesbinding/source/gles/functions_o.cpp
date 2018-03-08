
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return Binding::ObjectLabel(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return Binding::ObjectPtrLabel(ptr, length, label);
}




} // namespace gles
