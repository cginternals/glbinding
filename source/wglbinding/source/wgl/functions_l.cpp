
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


GLboolean wglLoadDisplayColorTableEXT(const GLushort * table, GLuint length)
{
    return Binding::wglLoadDisplayColorTableEXT(table, length);
}

BOOL wglLockVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
    return Binding::wglLockVideoCaptureDeviceNV(hDc, hDevice);
}




} // namespace wgl
