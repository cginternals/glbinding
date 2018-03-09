
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglUseFontBitmaps(HDC hDC, DWORD first, DWORD count, DWORD listBase)
{
    return Binding::wglUseFontBitmaps(hDC, first, count, listBase);
}

BOOL wglUseFontBitmapsA(HDC hDC, DWORD first, DWORD count, DWORD listBase)
{
    return Binding::wglUseFontBitmapsA(hDC, first, count, listBase);
}

BOOL wglUseFontBitmapsW(HDC hDC, DWORD first, DWORD count, DWORD listBase)
{
    return Binding::wglUseFontBitmapsW(hDC, first, count, listBase);
}

BOOL wglUseFontOutlines(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
    return Binding::wglUseFontOutlines(hDC, first, count, listBase, deviation, extrusion, format, lpgmf);
}

BOOL wglUseFontOutlinesA(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
    return Binding::wglUseFontOutlinesA(hDC, first, count, listBase, deviation, extrusion, format, lpgmf);
}

BOOL wglUseFontOutlinesW(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
    return Binding::wglUseFontOutlinesW(hDC, first, count, listBase, deviation, extrusion, format, lpgmf);
}




} // namespace wgl
