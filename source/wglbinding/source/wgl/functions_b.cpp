
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglBeginFrameTrackingI3D()
{
    return Binding::wglBeginFrameTrackingI3D();
}

GLboolean wglBindDisplayColorTableEXT(GLushort id)
{
    return Binding::wglBindDisplayColorTableEXT(id);
}

BOOL wglBindSwapBarrierNV(GLuint group, GLuint barrier)
{
    return Binding::wglBindSwapBarrierNV(group, barrier);
}

BOOL wglBindTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
{
    return Binding::wglBindTexImageARB(hPbuffer, iBuffer);
}

BOOL wglBindVideoCaptureDeviceNV(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice)
{
    return Binding::wglBindVideoCaptureDeviceNV(uVideoSlot, hDevice);
}

BOOL wglBindVideoDeviceNV(HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList)
{
    return Binding::wglBindVideoDeviceNV(hDC, uVideoSlot, hVideoDevice, piAttribList);
}

BOOL wglBindVideoImageNV(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer)
{
    return Binding::wglBindVideoImageNV(hVideoDevice, hPbuffer, iVideoBuffer);
}

VOID wglBlitContextFramebufferAMD(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return Binding::wglBlitContextFramebufferAMD(dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}




} // namespace wgl
