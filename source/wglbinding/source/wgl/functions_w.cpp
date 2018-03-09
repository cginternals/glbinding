
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglWaitForMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc)
{
    return Binding::wglWaitForMscOML(hdc, target_msc, divisor, remainder, ust, msc, sbc);
}

BOOL wglWaitForSbcOML(HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc)
{
    return Binding::wglWaitForSbcOML(hdc, target_sbc, ust, msc, sbc);
}




} // namespace wgl
