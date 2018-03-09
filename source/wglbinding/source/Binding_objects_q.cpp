
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, int, int *> Binding::wglQueryCurrentContextNV("wglQueryCurrentContextNV");
Function<BOOL, HDC, GLuint *> Binding::wglQueryFrameCountNV("wglQueryFrameCountNV");
Function<BOOL, BOOL *> Binding::wglQueryFrameLockMasterI3D("wglQueryFrameLockMasterI3D");
Function<BOOL, DWORD *, DWORD *, float *> Binding::wglQueryFrameTrackingI3D("wglQueryFrameTrackingI3D");
Function<BOOL, HDC, UINT *, UINT *> Binding::wglQueryGenlockMaxSourceDelayI3D("wglQueryGenlockMaxSourceDelayI3D");
Function<BOOL, HDC, GLuint *, GLuint *> Binding::wglQueryMaxSwapGroupsNV("wglQueryMaxSwapGroupsNV");
Function<BOOL, HPBUFFERARB, int, int *> Binding::wglQueryPbufferARB("wglQueryPbufferARB");
Function<BOOL, HPBUFFEREXT, int, int *> Binding::wglQueryPbufferEXT("wglQueryPbufferEXT");
Function<BOOL, HDC, GLuint *, GLuint *> Binding::wglQuerySwapGroupNV("wglQuerySwapGroupNV");
Function<BOOL, HDC, HVIDEOINPUTDEVICENV, int, int *> Binding::wglQueryVideoCaptureDeviceNV("wglQueryVideoCaptureDeviceNV");



} // namespace wglbinding
