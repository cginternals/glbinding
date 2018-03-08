
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glQueryCounterEXT(GLuint id, GLenum target)
{
    return Binding::QueryCounterEXT(id, target);
}




} // namespace gles
