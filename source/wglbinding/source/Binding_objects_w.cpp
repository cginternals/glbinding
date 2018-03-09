
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HDC, INT64, INT64, INT64, INT64 *, INT64 *, INT64 *> Binding::wglWaitForMscOML("wglWaitForMscOML");
Function<BOOL, HDC, INT64, INT64 *, INT64 *, INT64 *> Binding::wglWaitForSbcOML("wglWaitForSbcOML");



} // namespace wglbinding
