
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HDC, UINT> Binding::wglGenlockSampleRateI3D("wglGenlockSampleRateI3D");
Function<BOOL, HDC, UINT> Binding::wglGenlockSourceDelayI3D("wglGenlockSourceDelayI3D");
Function<BOOL, HDC, UINT> Binding::wglGenlockSourceEdgeI3D("wglGenlockSourceEdgeI3D");
Function<BOOL, HDC, UINT> Binding::wglGenlockSourceI3D("wglGenlockSourceI3D");
Function<UINT, HGLRC> Binding::wglGetContextGPUIDAMD("wglGetContextGPUIDAMD");
Function<HGLRC> Binding::wglGetCurrentAssociatedContextAMD("wglGetCurrentAssociatedContextAMD");
Function<HGLRC> Binding::wglGetCurrentContext("wglGetCurrentContext");
Function<HDC> Binding::wglGetCurrentDC("wglGetCurrentDC");
Function<HDC> Binding::wglGetCurrentReadDCARB("wglGetCurrentReadDCARB");
Function<HDC> Binding::wglGetCurrentReadDCEXT("wglGetCurrentReadDCEXT");
Function<BOOL, HDC, int, int *> Binding::wglGetDigitalVideoParametersI3D("wglGetDigitalVideoParametersI3D");
Function<const char *, HDC> Binding::wglGetExtensionsStringARB("wglGetExtensionsStringARB");
Function<const char *> Binding::wglGetExtensionsStringEXT("wglGetExtensionsStringEXT");
Function<BOOL, float *> Binding::wglGetFrameUsageI3D("wglGetFrameUsageI3D");
Function<UINT, UINT, UINT *> Binding::wglGetGPUIDsAMD("wglGetGPUIDsAMD");
Function<INT, UINT, int, GLenum, UINT, void *> Binding::wglGetGPUInfoAMD("wglGetGPUInfoAMD");
Function<BOOL, HDC, int, USHORT *, USHORT *, USHORT *> Binding::wglGetGammaTableI3D("wglGetGammaTableI3D");
Function<BOOL, HDC, int, int *> Binding::wglGetGammaTableParametersI3D("wglGetGammaTableParametersI3D");
Function<BOOL, HDC, UINT *> Binding::wglGetGenlockSampleRateI3D("wglGetGenlockSampleRateI3D");
Function<BOOL, HDC, UINT *> Binding::wglGetGenlockSourceDelayI3D("wglGetGenlockSourceDelayI3D");
Function<BOOL, HDC, UINT *> Binding::wglGetGenlockSourceEdgeI3D("wglGetGenlockSourceEdgeI3D");
Function<BOOL, HDC, UINT *> Binding::wglGetGenlockSourceI3D("wglGetGenlockSourceI3D");
Function<int, HDC, int, int, int, const COLORREF *> Binding::wglGetLayerPaletteEntries("wglGetLayerPaletteEntries");
Function<BOOL, HDC, INT32 *, INT32 *> Binding::wglGetMscRateOML("wglGetMscRateOML");
Function<HDC, HPBUFFERARB> Binding::wglGetPbufferDCARB("wglGetPbufferDCARB");
Function<HDC, HPBUFFEREXT> Binding::wglGetPbufferDCEXT("wglGetPbufferDCEXT");
Function<BOOL, HDC, int, int, UINT, const int *, FLOAT *> Binding::wglGetPixelFormatAttribfvARB("wglGetPixelFormatAttribfvARB");
Function<BOOL, HDC, int, int, UINT, int *, FLOAT *> Binding::wglGetPixelFormatAttribfvEXT("wglGetPixelFormatAttribfvEXT");
Function<BOOL, HDC, int, int, UINT, const int *, int *> Binding::wglGetPixelFormatAttribivARB("wglGetPixelFormatAttribivARB");
Function<BOOL, HDC, int, int, UINT, int *, int *> Binding::wglGetPixelFormatAttribivEXT("wglGetPixelFormatAttribivEXT");
Function<PROC, LPCSTR> Binding::wglGetProcAddress("wglGetProcAddress");
Function<int> Binding::wglGetSwapIntervalEXT("wglGetSwapIntervalEXT");
Function<BOOL, HDC, INT64 *, INT64 *, INT64 *> Binding::wglGetSyncValuesOML("wglGetSyncValuesOML");
Function<BOOL, HDC, int, HPVIDEODEV *> Binding::wglGetVideoDeviceNV("wglGetVideoDeviceNV");
Function<BOOL, HPVIDEODEV, unsigned long *, unsigned long *> Binding::wglGetVideoInfoNV("wglGetVideoInfoNV");



} // namespace wglbinding
