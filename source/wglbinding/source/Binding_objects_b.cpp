
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL> Binding::wglBeginFrameTrackingI3D("wglBeginFrameTrackingI3D");
Function<GLboolean, GLushort> Binding::wglBindDisplayColorTableEXT("wglBindDisplayColorTableEXT");
Function<BOOL, GLuint, GLuint> Binding::wglBindSwapBarrierNV("wglBindSwapBarrierNV");
Function<BOOL, HPBUFFERARB, int> Binding::wglBindTexImageARB("wglBindTexImageARB");
Function<BOOL, UINT, HVIDEOINPUTDEVICENV> Binding::wglBindVideoCaptureDeviceNV("wglBindVideoCaptureDeviceNV");
Function<BOOL, HDC, unsigned int, HVIDEOOUTPUTDEVICENV, const int *> Binding::wglBindVideoDeviceNV("wglBindVideoDeviceNV");
Function<BOOL, HPVIDEODEV, HPBUFFERARB, int> Binding::wglBindVideoImageNV("wglBindVideoImageNV");
Function<VOID, HGLRC, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum> Binding::wglBlitContextFramebufferAMD("wglBlitContextFramebufferAMD");



} // namespace wglbinding
