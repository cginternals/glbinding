
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglDXCloseDeviceNV(HANDLE hDevice)
{
    return Binding::wglDXCloseDeviceNV(hDevice);
}

BOOL wglDXLockObjectsNV(HANDLE hDevice, GLint count, HANDLE * hObjects)
{
    return Binding::wglDXLockObjectsNV(hDevice, count, hObjects);
}

BOOL wglDXObjectAccessNV(HANDLE hObject, GLenum access)
{
    return Binding::wglDXObjectAccessNV(hObject, access);
}

HANDLE wglDXOpenDeviceNV(void * dxDevice)
{
    return Binding::wglDXOpenDeviceNV(dxDevice);
}

HANDLE wglDXRegisterObjectNV(HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access)
{
    return Binding::wglDXRegisterObjectNV(hDevice, dxObject, name, type, access);
}

BOOL wglDXSetResourceShareHandleNV(void * dxObject, HANDLE shareHandle)
{
    return Binding::wglDXSetResourceShareHandleNV(dxObject, shareHandle);
}

BOOL wglDXUnlockObjectsNV(HANDLE hDevice, GLint count, HANDLE * hObjects)
{
    return Binding::wglDXUnlockObjectsNV(hDevice, count, hObjects);
}

BOOL wglDXUnregisterObjectNV(HANDLE hDevice, HANDLE hObject)
{
    return Binding::wglDXUnregisterObjectNV(hDevice, hObject);
}

BOOL wglDelayBeforeSwapNV(HDC hDC, GLfloat seconds)
{
    return Binding::wglDelayBeforeSwapNV(hDC, seconds);
}

BOOL wglDeleteAssociatedContextAMD(HGLRC hglrc)
{
    return Binding::wglDeleteAssociatedContextAMD(hglrc);
}

VOID wglDeleteBufferRegionARB(HANDLE hRegion)
{
    return Binding::wglDeleteBufferRegionARB(hRegion);
}

BOOL wglDeleteContext(HGLRC oldContext)
{
    return Binding::wglDeleteContext(oldContext);
}

BOOL wglDeleteDCNV(HDC hdc)
{
    return Binding::wglDeleteDCNV(hdc);
}

BOOL wglDescribeLayerPlane(HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd)
{
    return Binding::wglDescribeLayerPlane(hDc, pixelFormat, layerPlane, nBytes, plpd);
}

VOID wglDestroyDisplayColorTableEXT(GLushort id)
{
    return Binding::wglDestroyDisplayColorTableEXT(id);
}

BOOL wglDestroyImageBufferI3D(HDC hDC, LPVOID pAddress)
{
    return Binding::wglDestroyImageBufferI3D(hDC, pAddress);
}

BOOL wglDestroyPbufferARB(HPBUFFERARB hPbuffer)
{
    return Binding::wglDestroyPbufferARB(hPbuffer);
}

BOOL wglDestroyPbufferEXT(HPBUFFEREXT hPbuffer)
{
    return Binding::wglDestroyPbufferEXT(hPbuffer);
}

BOOL wglDisableFrameLockI3D()
{
    return Binding::wglDisableFrameLockI3D();
}

BOOL wglDisableGenlockI3D(HDC hDC)
{
    return Binding::wglDisableGenlockI3D(hDC);
}




} // namespace wgl
