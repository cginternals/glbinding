
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, BOOL *> Binding::wglIsEnabledFrameLockI3D("wglIsEnabledFrameLockI3D");
Function<BOOL, HDC, BOOL *> Binding::wglIsEnabledGenlockI3D("wglIsEnabledGenlockI3D");



} // namespace wglbinding
