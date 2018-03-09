
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglIsEnabledFrameLockI3D(BOOL * pFlag)
{
    return Binding::wglIsEnabledFrameLockI3D(pFlag);
}

BOOL wglIsEnabledGenlockI3D(HDC hDC, BOOL * pFlag)
{
    return Binding::wglIsEnabledGenlockI3D(hDC, pFlag);
}




} // namespace wgl
