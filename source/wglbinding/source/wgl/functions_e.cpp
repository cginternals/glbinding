
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglEnableFrameLockI3D()
{
    return Binding::wglEnableFrameLockI3D();
}

BOOL wglEnableGenlockI3D(HDC hDC)
{
    return Binding::wglEnableGenlockI3D(hDC);
}

BOOL wglEndFrameTrackingI3D()
{
    return Binding::wglEndFrameTrackingI3D();
}

BOOL wglEnumGpuDevicesNV(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice)
{
    return Binding::wglEnumGpuDevicesNV(hGpu, iDeviceIndex, lpGpuDevice);
}

BOOL wglEnumGpusFromAffinityDCNV(HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu)
{
    return Binding::wglEnumGpusFromAffinityDCNV(hAffinityDC, iGpuIndex, hGpu);
}

BOOL wglEnumGpusNV(UINT iGpuIndex, HGPUNV * phGpu)
{
    return Binding::wglEnumGpusNV(iGpuIndex, phGpu);
}

UINT wglEnumerateVideoCaptureDevicesNV(HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList)
{
    return Binding::wglEnumerateVideoCaptureDevicesNV(hDc, phDeviceList);
}

int wglEnumerateVideoDevicesNV(HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList)
{
    return Binding::wglEnumerateVideoDevicesNV(hDC, phDeviceList);
}




} // namespace wgl
