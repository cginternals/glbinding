
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HANDLE> Binding::wglDXCloseDeviceNV("wglDXCloseDeviceNV");
Function<BOOL, HANDLE, GLint, HANDLE *> Binding::wglDXLockObjectsNV("wglDXLockObjectsNV");
Function<BOOL, HANDLE, GLenum> Binding::wglDXObjectAccessNV("wglDXObjectAccessNV");
Function<HANDLE, void *> Binding::wglDXOpenDeviceNV("wglDXOpenDeviceNV");
Function<HANDLE, HANDLE, void *, GLuint, GLenum, GLenum> Binding::wglDXRegisterObjectNV("wglDXRegisterObjectNV");
Function<BOOL, void *, HANDLE> Binding::wglDXSetResourceShareHandleNV("wglDXSetResourceShareHandleNV");
Function<BOOL, HANDLE, GLint, HANDLE *> Binding::wglDXUnlockObjectsNV("wglDXUnlockObjectsNV");
Function<BOOL, HANDLE, HANDLE> Binding::wglDXUnregisterObjectNV("wglDXUnregisterObjectNV");
Function<BOOL, HDC, GLfloat> Binding::wglDelayBeforeSwapNV("wglDelayBeforeSwapNV");
Function<BOOL, HGLRC> Binding::wglDeleteAssociatedContextAMD("wglDeleteAssociatedContextAMD");
Function<VOID, HANDLE> Binding::wglDeleteBufferRegionARB("wglDeleteBufferRegionARB");
Function<BOOL, HGLRC> Binding::wglDeleteContext("wglDeleteContext");
Function<BOOL, HDC> Binding::wglDeleteDCNV("wglDeleteDCNV");
Function<BOOL, HDC, int, int, UINT, const LAYERPLANEDESCRIPTOR *> Binding::wglDescribeLayerPlane("wglDescribeLayerPlane");
Function<VOID, GLushort> Binding::wglDestroyDisplayColorTableEXT("wglDestroyDisplayColorTableEXT");
Function<BOOL, HDC, LPVOID> Binding::wglDestroyImageBufferI3D("wglDestroyImageBufferI3D");
Function<BOOL, HPBUFFERARB> Binding::wglDestroyPbufferARB("wglDestroyPbufferARB");
Function<BOOL, HPBUFFEREXT> Binding::wglDestroyPbufferEXT("wglDestroyPbufferEXT");
Function<BOOL> Binding::wglDisableFrameLockI3D("wglDisableFrameLockI3D");
Function<BOOL, HDC> Binding::wglDisableGenlockI3D("wglDisableGenlockI3D");



} // namespace wglbinding
