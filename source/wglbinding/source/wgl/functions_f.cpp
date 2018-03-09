
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


void wglFreeMemoryNV(void * pointer)
{
    return Binding::wglFreeMemoryNV(pointer);
}




} // namespace wgl
