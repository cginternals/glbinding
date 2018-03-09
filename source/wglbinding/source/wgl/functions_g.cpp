
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglGenlockSampleRateI3D(HDC hDC, UINT uRate)
{
    return Binding::wglGenlockSampleRateI3D(hDC, uRate);
}

BOOL wglGenlockSourceDelayI3D(HDC hDC, UINT uDelay)
{
    return Binding::wglGenlockSourceDelayI3D(hDC, uDelay);
}

BOOL wglGenlockSourceEdgeI3D(HDC hDC, UINT uEdge)
{
    return Binding::wglGenlockSourceEdgeI3D(hDC, uEdge);
}

BOOL wglGenlockSourceI3D(HDC hDC, UINT uSource)
{
    return Binding::wglGenlockSourceI3D(hDC, uSource);
}

UINT wglGetContextGPUIDAMD(HGLRC hglrc)
{
    return Binding::wglGetContextGPUIDAMD(hglrc);
}

HGLRC wglGetCurrentAssociatedContextAMD()
{
    return Binding::wglGetCurrentAssociatedContextAMD();
}

HGLRC wglGetCurrentContext()
{
    return Binding::wglGetCurrentContext();
}

HDC wglGetCurrentDC()
{
    return Binding::wglGetCurrentDC();
}

HDC wglGetCurrentReadDCARB()
{
    return Binding::wglGetCurrentReadDCARB();
}

HDC wglGetCurrentReadDCEXT()
{
    return Binding::wglGetCurrentReadDCEXT();
}

BOOL wglGetDigitalVideoParametersI3D(HDC hDC, int iAttribute, int * piValue)
{
    return Binding::wglGetDigitalVideoParametersI3D(hDC, iAttribute, piValue);
}

const char * wglGetExtensionsStringARB(HDC hdc)
{
    return Binding::wglGetExtensionsStringARB(hdc);
}

const char * wglGetExtensionsStringEXT()
{
    return Binding::wglGetExtensionsStringEXT();
}

BOOL wglGetFrameUsageI3D(float * pUsage)
{
    return Binding::wglGetFrameUsageI3D(pUsage);
}

UINT wglGetGPUIDsAMD(UINT maxCount, UINT * ids)
{
    return Binding::wglGetGPUIDsAMD(maxCount, ids);
}

INT wglGetGPUInfoAMD(UINT id, int property, GLenum dataType, UINT size, void * data)
{
    return Binding::wglGetGPUInfoAMD(id, property, dataType, size, data);
}

BOOL wglGetGammaTableI3D(HDC hDC, int iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue)
{
    return Binding::wglGetGammaTableI3D(hDC, iEntries, puRed, puGreen, puBlue);
}

BOOL wglGetGammaTableParametersI3D(HDC hDC, int iAttribute, int * piValue)
{
    return Binding::wglGetGammaTableParametersI3D(hDC, iAttribute, piValue);
}

BOOL wglGetGenlockSampleRateI3D(HDC hDC, UINT * uRate)
{
    return Binding::wglGetGenlockSampleRateI3D(hDC, uRate);
}

BOOL wglGetGenlockSourceDelayI3D(HDC hDC, UINT * uDelay)
{
    return Binding::wglGetGenlockSourceDelayI3D(hDC, uDelay);
}

BOOL wglGetGenlockSourceEdgeI3D(HDC hDC, UINT * uEdge)
{
    return Binding::wglGetGenlockSourceEdgeI3D(hDC, uEdge);
}

BOOL wglGetGenlockSourceI3D(HDC hDC, UINT * uSource)
{
    return Binding::wglGetGenlockSourceI3D(hDC, uSource);
}

int wglGetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr)
{
    return Binding::wglGetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

BOOL wglGetMscRateOML(HDC hdc, INT32 * numerator, INT32 * denominator)
{
    return Binding::wglGetMscRateOML(hdc, numerator, denominator);
}

HDC wglGetPbufferDCARB(HPBUFFERARB hPbuffer)
{
    return Binding::wglGetPbufferDCARB(hPbuffer);
}

HDC wglGetPbufferDCEXT(HPBUFFEREXT hPbuffer)
{
    return Binding::wglGetPbufferDCEXT(hPbuffer);
}

BOOL wglGetPixelFormatAttribfvARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues)
{
    return Binding::wglGetPixelFormatAttribfvARB(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
}

BOOL wglGetPixelFormatAttribfvEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues)
{
    return Binding::wglGetPixelFormatAttribfvEXT(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
}

BOOL wglGetPixelFormatAttribivARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues)
{
    return Binding::wglGetPixelFormatAttribivARB(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
}

BOOL wglGetPixelFormatAttribivEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues)
{
    return Binding::wglGetPixelFormatAttribivEXT(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
}

PROC wglGetProcAddress(LPCSTR lpszProc)
{
    return Binding::wglGetProcAddress(lpszProc);
}

int wglGetSwapIntervalEXT()
{
    return Binding::wglGetSwapIntervalEXT();
}

BOOL wglGetSyncValuesOML(HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc)
{
    return Binding::wglGetSyncValuesOML(hdc, ust, msc, sbc);
}

BOOL wglGetVideoDeviceNV(HDC hDC, int numDevices, HPVIDEODEV * hVideoDevice)
{
    return Binding::wglGetVideoDeviceNV(hDC, numDevices, hVideoDevice);
}

BOOL wglGetVideoInfoNV(HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo)
{
    return Binding::wglGetVideoInfoNV(hpVideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
}




} // namespace wgl
