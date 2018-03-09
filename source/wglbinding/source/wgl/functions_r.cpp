
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglRealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize)
{
    return Binding::wglRealizeLayerPalette(hdc, iLayerPlane, bRealize);
}

BOOL wglReleaseImageBufferEventsI3D(HDC hDC, const LPVOID * pAddress, UINT count)
{
    return Binding::wglReleaseImageBufferEventsI3D(hDC, pAddress, count);
}

int wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC)
{
    return Binding::wglReleasePbufferDCARB(hPbuffer, hDC);
}

int wglReleasePbufferDCEXT(HPBUFFEREXT hPbuffer, HDC hDC)
{
    return Binding::wglReleasePbufferDCEXT(hPbuffer, hDC);
}

BOOL wglReleaseTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
{
    return Binding::wglReleaseTexImageARB(hPbuffer, iBuffer);
}

BOOL wglReleaseVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
    return Binding::wglReleaseVideoCaptureDeviceNV(hDc, hDevice);
}

BOOL wglReleaseVideoDeviceNV(HPVIDEODEV hVideoDevice)
{
    return Binding::wglReleaseVideoDeviceNV(hVideoDevice);
}

BOOL wglReleaseVideoImageNV(HPBUFFERARB hPbuffer, int iVideoBuffer)
{
    return Binding::wglReleaseVideoImageNV(hPbuffer, iVideoBuffer);
}

BOOL wglResetFrameCountNV(HDC hDC)
{
    return Binding::wglResetFrameCountNV(hDC);
}

BOOL wglRestoreBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc)
{
    return Binding::wglRestoreBufferRegionARB(hRegion, x, y, width, height, xSrc, ySrc);
}




} // namespace wgl
