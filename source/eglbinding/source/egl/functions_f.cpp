
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglFenceNV(EGLSyncNV sync)
{
    return Binding::FenceNV(sync);
}




} // namespace egl
