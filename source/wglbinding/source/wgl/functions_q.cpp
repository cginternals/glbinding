
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglQueryCurrentContextNV(int iAttribute, int * piValue)
{
    return Binding::wglQueryCurrentContextNV(iAttribute, piValue);
}

BOOL wglQueryFrameCountNV(HDC hDC, GLuint * count)
{
    return Binding::wglQueryFrameCountNV(hDC, count);
}

BOOL wglQueryFrameLockMasterI3D(BOOL * pFlag)
{
    return Binding::wglQueryFrameLockMasterI3D(pFlag);
}

BOOL wglQueryFrameTrackingI3D(DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage)
{
    return Binding::wglQueryFrameTrackingI3D(pFrameCount, pMissedFrames, pLastMissedUsage);
}

BOOL wglQueryGenlockMaxSourceDelayI3D(HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay)
{
    return Binding::wglQueryGenlockMaxSourceDelayI3D(hDC, uMaxLineDelay, uMaxPixelDelay);
}

BOOL wglQueryMaxSwapGroupsNV(HDC hDC, GLuint * maxGroups, GLuint * maxBarriers)
{
    return Binding::wglQueryMaxSwapGroupsNV(hDC, maxGroups, maxBarriers);
}

BOOL wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int * piValue)
{
    return Binding::wglQueryPbufferARB(hPbuffer, iAttribute, piValue);
}

BOOL wglQueryPbufferEXT(HPBUFFEREXT hPbuffer, int iAttribute, int * piValue)
{
    return Binding::wglQueryPbufferEXT(hPbuffer, iAttribute, piValue);
}

BOOL wglQuerySwapGroupNV(HDC hDC, GLuint * group, GLuint * barrier)
{
    return Binding::wglQuerySwapGroupNV(hDC, group, barrier);
}

BOOL wglQueryVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int * piValue)
{
    return Binding::wglQueryVideoCaptureDeviceNV(hDc, hDevice, iAttribute, piValue);
}




} // namespace wgl
