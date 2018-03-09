
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL> Binding::wglEnableFrameLockI3D("wglEnableFrameLockI3D");
Function<BOOL, HDC> Binding::wglEnableGenlockI3D("wglEnableGenlockI3D");
Function<BOOL> Binding::wglEndFrameTrackingI3D("wglEndFrameTrackingI3D");
Function<BOOL, HGPUNV, UINT, PGPU_DEVICE> Binding::wglEnumGpuDevicesNV("wglEnumGpuDevicesNV");
Function<BOOL, HDC, UINT, HGPUNV *> Binding::wglEnumGpusFromAffinityDCNV("wglEnumGpusFromAffinityDCNV");
Function<BOOL, UINT, HGPUNV *> Binding::wglEnumGpusNV("wglEnumGpusNV");
Function<UINT, HDC, HVIDEOINPUTDEVICENV *> Binding::wglEnumerateVideoCaptureDevicesNV("wglEnumerateVideoCaptureDevicesNV");
Function<int, HDC, HVIDEOOUTPUTDEVICENV *> Binding::wglEnumerateVideoDevicesNV("wglEnumerateVideoDevicesNV");



} // namespace wglbinding
