
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glActiveTexture(GLenum texture)
{
    return Binding::ActiveTexture(texture);
}




} // namespace glsc
