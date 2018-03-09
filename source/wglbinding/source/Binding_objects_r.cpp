
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HDC, int, BOOL> Binding::wglRealizeLayerPalette("wglRealizeLayerPalette");
Function<BOOL, HDC, const LPVOID *, UINT> Binding::wglReleaseImageBufferEventsI3D("wglReleaseImageBufferEventsI3D");
Function<int, HPBUFFERARB, HDC> Binding::wglReleasePbufferDCARB("wglReleasePbufferDCARB");
Function<int, HPBUFFEREXT, HDC> Binding::wglReleasePbufferDCEXT("wglReleasePbufferDCEXT");
Function<BOOL, HPBUFFERARB, int> Binding::wglReleaseTexImageARB("wglReleaseTexImageARB");
Function<BOOL, HDC, HVIDEOINPUTDEVICENV> Binding::wglReleaseVideoCaptureDeviceNV("wglReleaseVideoCaptureDeviceNV");
Function<BOOL, HPVIDEODEV> Binding::wglReleaseVideoDeviceNV("wglReleaseVideoDeviceNV");
Function<BOOL, HPBUFFERARB, int> Binding::wglReleaseVideoImageNV("wglReleaseVideoImageNV");
Function<BOOL, HDC> Binding::wglResetFrameCountNV("wglResetFrameCountNV");
Function<BOOL, HANDLE, int, int, int, int, int, int> Binding::wglRestoreBufferRegionARB("wglRestoreBufferRegionARB");



} // namespace wglbinding
