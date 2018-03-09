
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglMakeAssociatedContextCurrentAMD(HGLRC hglrc)
{
    return Binding::wglMakeAssociatedContextCurrentAMD(hglrc);
}

BOOL wglMakeContextCurrentARB(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
    return Binding::wglMakeContextCurrentARB(hDrawDC, hReadDC, hglrc);
}

BOOL wglMakeContextCurrentEXT(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
    return Binding::wglMakeContextCurrentEXT(hDrawDC, hReadDC, hglrc);
}

BOOL wglMakeCurrent(HDC hDc, HGLRC newContext)
{
    return Binding::wglMakeCurrent(hDc, newContext);
}




} // namespace wgl
