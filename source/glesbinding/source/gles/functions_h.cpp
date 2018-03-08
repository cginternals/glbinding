
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glHint(GLenum target, GLenum mode)
{
    return Binding::Hint(target, mode);
}




} // namespace gles
