
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glHint(GLenum target, GLenum mode)
{
    return Binding::Hint(target, mode);
}




} // namespace glsc
