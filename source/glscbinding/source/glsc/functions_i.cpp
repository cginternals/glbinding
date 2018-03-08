
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


GLboolean glIsEnabled(GLenum cap)
{
    return Binding::IsEnabled(cap);
}




} // namespace glsc
