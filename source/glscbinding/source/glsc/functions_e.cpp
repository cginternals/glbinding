
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glEnable(GLenum cap)
{
    return Binding::Enable(cap);
}

void glEnableVertexAttribArray(GLuint index)
{
    return Binding::EnableVertexAttribArray(index);
}




} // namespace glsc
