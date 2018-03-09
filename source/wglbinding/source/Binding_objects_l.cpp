
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<GLboolean, const GLushort *, GLuint> Binding::wglLoadDisplayColorTableEXT("wglLoadDisplayColorTableEXT");
Function<BOOL, HDC, HVIDEOINPUTDEVICENV> Binding::wglLockVideoCaptureDeviceNV("wglLockVideoCaptureDeviceNV");



} // namespace wglbinding
