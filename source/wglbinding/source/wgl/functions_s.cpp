
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglSaveBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height)
{
    return Binding::wglSaveBufferRegionARB(hRegion, x, y, width, height);
}

BOOL wglSendPbufferToVideoNV(HPBUFFERARB hPbuffer, int iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock)
{
    return Binding::wglSendPbufferToVideoNV(hPbuffer, iBufferType, pulCounterPbuffer, bBlock);
}

BOOL wglSetDigitalVideoParametersI3D(HDC hDC, int iAttribute, const int * piValue)
{
    return Binding::wglSetDigitalVideoParametersI3D(hDC, iAttribute, piValue);
}

BOOL wglSetGammaTableI3D(HDC hDC, int iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue)
{
    return Binding::wglSetGammaTableI3D(hDC, iEntries, puRed, puGreen, puBlue);
}

BOOL wglSetGammaTableParametersI3D(HDC hDC, int iAttribute, const int * piValue)
{
    return Binding::wglSetGammaTableParametersI3D(hDC, iAttribute, piValue);
}

int wglSetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr)
{
    return Binding::wglSetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

BOOL wglSetPbufferAttribARB(HPBUFFERARB hPbuffer, const int * piAttribList)
{
    return Binding::wglSetPbufferAttribARB(hPbuffer, piAttribList);
}

BOOL wglSetStereoEmitterState3DL(HDC hDC, UINT uState)
{
    return Binding::wglSetStereoEmitterState3DL(hDC, uState);
}

BOOL wglShareLists(HGLRC hrcSrvShare, HGLRC hrcSrvSource)
{
    return Binding::wglShareLists(hrcSrvShare, hrcSrvSource);
}

INT64 wglSwapBuffersMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder)
{
    return Binding::wglSwapBuffersMscOML(hdc, target_msc, divisor, remainder);
}

BOOL wglSwapIntervalEXT(int interval)
{
    return Binding::wglSwapIntervalEXT(interval);
}

BOOL wglSwapLayerBuffers(HDC hdc, UINT fuFlags)
{
    return Binding::wglSwapLayerBuffers(hdc, fuFlags);
}

INT64 wglSwapLayerBuffersMscOML(HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder)
{
    return Binding::wglSwapLayerBuffersMscOML(hdc, fuPlanes, target_msc, divisor, remainder);
}




} // namespace wgl
