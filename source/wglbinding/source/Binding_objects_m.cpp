
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HGLRC> Binding::wglMakeAssociatedContextCurrentAMD("wglMakeAssociatedContextCurrentAMD");
Function<BOOL, HDC, HDC, HGLRC> Binding::wglMakeContextCurrentARB("wglMakeContextCurrentARB");
Function<BOOL, HDC, HDC, HGLRC> Binding::wglMakeContextCurrentEXT("wglMakeContextCurrentEXT");
Function<BOOL, HDC, HGLRC> Binding::wglMakeCurrent("wglMakeCurrent");



} // namespace wglbinding
