
#include "../Binding_pch.h"

#include <glxbinding/glx/functions.h>


using namespace glxbinding;


namespace glx
{


Bool glXAssociateDMPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer)
{
    return Binding::XAssociateDMPbufferSGIX(dpy, pbuffer, params, dmbuffer);
}

int glXBindChannelToWindowSGIX(Display * display, int screen, int channel, Window window)
{
    return Binding::XBindChannelToWindowSGIX(display, screen, channel, window);
}

int glXBindHyperpipeSGIX(Display * dpy, int hpId)
{
    return Binding::XBindHyperpipeSGIX(dpy, hpId);
}

Bool glXBindSwapBarrierNV(Display * dpy, GLuint group, GLuint barrier)
{
    return Binding::XBindSwapBarrierNV(dpy, group, barrier);
}

void glXBindSwapBarrierSGIX(Display * dpy, GLXDrawable drawable, int barrier)
{
    return Binding::XBindSwapBarrierSGIX(dpy, drawable, barrier);
}

void glXBindTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list)
{
    return Binding::XBindTexImageEXT(dpy, drawable, buffer, attrib_list);
}

int glXBindVideoCaptureDeviceNV(Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device)
{
    return Binding::XBindVideoCaptureDeviceNV(dpy, video_capture_slot, device);
}

int glXBindVideoDeviceNV(Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list)
{
    return Binding::XBindVideoDeviceNV(dpy, video_slot, video_device, attrib_list);
}

int glXBindVideoImageNV(Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer)
{
    return Binding::XBindVideoImageNV(dpy, VideoDevice, pbuf, iVideoBuffer);
}

void glXBlitContextFramebufferAMD(GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return Binding::XBlitContextFramebufferAMD(dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

int glXChannelRectSGIX(Display * display, int screen, int channel, int x, int y, int w, int h)
{
    return Binding::XChannelRectSGIX(display, screen, channel, x, y, w, h);
}

int glXChannelRectSyncSGIX(Display * display, int screen, int channel, GLenum synctype)
{
    return Binding::XChannelRectSyncSGIX(display, screen, channel, synctype);
}

GLXFBConfig * glXChooseFBConfig(Display * dpy, int screen, const int * attrib_list, int * nelements)
{
    return Binding::XChooseFBConfig(dpy, screen, attrib_list, nelements);
}

GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display * dpy, int screen, int * attrib_list, int * nelements)
{
    return Binding::XChooseFBConfigSGIX(dpy, screen, attrib_list, nelements);
}

XVisualInfo * glXChooseVisual(Display * dpy, int screen, int * attribList)
{
    return Binding::XChooseVisual(dpy, screen, attribList);
}

void glXCopyBufferSubDataNV(Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return Binding::XCopyBufferSubDataNV(dpy, readCtx, writeCtx, readTarget, writeTarget, readOffset, writeOffset, size);
}

void glXCopyContext(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask)
{
    return Binding::XCopyContext(dpy, src, dst, mask);
}

void glXCopyImageSubDataNV(Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return Binding::XCopyImageSubDataNV(dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glXCopySubBufferMESA(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height)
{
    return Binding::XCopySubBufferMESA(dpy, drawable, x, y, width, height);
}

GLXContext glXCreateAssociatedContextAMD(unsigned int id, GLXContext share_list)
{
    return Binding::XCreateAssociatedContextAMD(id, share_list);
}

GLXContext glXCreateAssociatedContextAttribsAMD(unsigned int id, GLXContext share_context, const int * attribList)
{
    return Binding::XCreateAssociatedContextAttribsAMD(id, share_context, attribList);
}

GLXContext glXCreateContext(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct)
{
    return Binding::XCreateContext(dpy, vis, shareList, direct);
}

GLXContext glXCreateContextAttribsARB(Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list)
{
    return Binding::XCreateContextAttribsARB(dpy, config, share_context, direct, attrib_list);
}

GLXContext glXCreateContextWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct)
{
    return Binding::XCreateContextWithConfigSGIX(dpy, config, render_type, share_list, direct);
}

GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list)
{
    return Binding::XCreateGLXPbufferSGIX(dpy, config, width, height, attrib_list);
}

GLXPixmap glXCreateGLXPixmap(Display * dpy, XVisualInfo * visual, Pixmap pixmap)
{
    return Binding::XCreateGLXPixmap(dpy, visual, pixmap);
}

GLXPixmap glXCreateGLXPixmapMESA(Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap)
{
    return Binding::XCreateGLXPixmapMESA(dpy, visual, pixmap, cmap);
}

GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap)
{
    return Binding::XCreateGLXPixmapWithConfigSGIX(dpy, config, pixmap);
}

GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode)
{
    return Binding::XCreateGLXVideoSourceSGIX(display, screen, server, path, nodeClass, drainNode);
}

GLXContext glXCreateNewContext(Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct)
{
    return Binding::XCreateNewContext(dpy, config, render_type, share_list, direct);
}

GLXPbuffer glXCreatePbuffer(Display * dpy, GLXFBConfig config, const int * attrib_list)
{
    return Binding::XCreatePbuffer(dpy, config, attrib_list);
}

GLXPixmap glXCreatePixmap(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list)
{
    return Binding::XCreatePixmap(dpy, config, pixmap, attrib_list);
}

GLXWindow glXCreateWindow(Display * dpy, GLXFBConfig config, Window win, const int * attrib_list)
{
    return Binding::XCreateWindow(dpy, config, win, attrib_list);
}

void glXCushionSGI(Display * dpy, Window window, float cushion)
{
    return Binding::XCushionSGI(dpy, window, cushion);
}

Bool glXDelayBeforeSwapNV(Display * dpy, GLXDrawable drawable, GLfloat seconds)
{
    return Binding::XDelayBeforeSwapNV(dpy, drawable, seconds);
}

Bool glXDeleteAssociatedContextAMD(GLXContext ctx)
{
    return Binding::XDeleteAssociatedContextAMD(ctx);
}

void glXDestroyContext(Display * dpy, GLXContext ctx)
{
    return Binding::XDestroyContext(dpy, ctx);
}

void glXDestroyGLXPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuf)
{
    return Binding::XDestroyGLXPbufferSGIX(dpy, pbuf);
}

void glXDestroyGLXPixmap(Display * dpy, GLXPixmap pixmap)
{
    return Binding::XDestroyGLXPixmap(dpy, pixmap);
}

void glXDestroyGLXVideoSourceSGIX(Display * dpy, GLXVideoSourceSGIX glxvideosource)
{
    return Binding::XDestroyGLXVideoSourceSGIX(dpy, glxvideosource);
}

int glXDestroyHyperpipeConfigSGIX(Display * dpy, int hpId)
{
    return Binding::XDestroyHyperpipeConfigSGIX(dpy, hpId);
}

void glXDestroyPbuffer(Display * dpy, GLXPbuffer pbuf)
{
    return Binding::XDestroyPbuffer(dpy, pbuf);
}

void glXDestroyPixmap(Display * dpy, GLXPixmap pixmap)
{
    return Binding::XDestroyPixmap(dpy, pixmap);
}

void glXDestroyWindow(Display * dpy, GLXWindow win)
{
    return Binding::XDestroyWindow(dpy, win);
}

GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display * dpy, int screen, int * nelements)
{
    return Binding::XEnumerateVideoCaptureDevicesNV(dpy, screen, nelements);
}

unsigned int * glXEnumerateVideoDevicesNV(Display * dpy, int screen, int * nelements)
{
    return Binding::XEnumerateVideoDevicesNV(dpy, screen, nelements);
}

void glXFreeContextEXT(Display * dpy, GLXContext context)
{
    return Binding::XFreeContextEXT(dpy, context);
}

unsigned int glXGetAGPOffsetMESA(const void * pointer)
{
    return Binding::XGetAGPOffsetMESA(pointer);
}

const char * glXGetClientString(Display * dpy, int name)
{
    return Binding::XGetClientString(dpy, name);
}

int glXGetConfig(Display * dpy, XVisualInfo * visual, int attrib, int * value)
{
    return Binding::XGetConfig(dpy, visual, attrib, value);
}

unsigned int glXGetContextGPUIDAMD(GLXContext ctx)
{
    return Binding::XGetContextGPUIDAMD(ctx);
}

GLXContextID glXGetContextIDEXT(const GLXContext context)
{
    return Binding::XGetContextIDEXT(context);
}

GLXContext glXGetCurrentAssociatedContextAMD()
{
    return Binding::XGetCurrentAssociatedContextAMD();
}

GLXContext glXGetCurrentContext()
{
    return Binding::XGetCurrentContext();
}

Display * glXGetCurrentDisplay()
{
    return Binding::XGetCurrentDisplay();
}

Display * glXGetCurrentDisplayEXT()
{
    return Binding::XGetCurrentDisplayEXT();
}

GLXDrawable glXGetCurrentDrawable()
{
    return Binding::XGetCurrentDrawable();
}

GLXDrawable glXGetCurrentReadDrawable()
{
    return Binding::XGetCurrentReadDrawable();
}

GLXDrawable glXGetCurrentReadDrawableSGI()
{
    return Binding::XGetCurrentReadDrawableSGI();
}

int glXGetFBConfigAttrib(Display * dpy, GLXFBConfig config, int attribute, int * value)
{
    return Binding::XGetFBConfigAttrib(dpy, config, attribute, value);
}

int glXGetFBConfigAttribSGIX(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value)
{
    return Binding::XGetFBConfigAttribSGIX(dpy, config, attribute, value);
}

GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display * dpy, XVisualInfo * vis)
{
    return Binding::XGetFBConfigFromVisualSGIX(dpy, vis);
}

GLXFBConfig * glXGetFBConfigs(Display * dpy, int screen, int * nelements)
{
    return Binding::XGetFBConfigs(dpy, screen, nelements);
}

unsigned int glXGetGPUIDsAMD(unsigned int maxCount, unsigned int * ids)
{
    return Binding::XGetGPUIDsAMD(maxCount, ids);
}

int glXGetGPUInfoAMD(unsigned int id, int property, GLenum dataType, unsigned int size, void * data)
{
    return Binding::XGetGPUInfoAMD(id, property, dataType, size, data);
}

Bool glXGetMscRateOML(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator)
{
    return Binding::XGetMscRateOML(dpy, drawable, numerator, denominator);
}

__GLXextFuncPtr glXGetProcAddress(const GLubyte * procName)
{
    return Binding::XGetProcAddress(procName);
}

__GLXextFuncPtr glXGetProcAddressARB(const GLubyte * procName)
{
    return Binding::XGetProcAddressARB(procName);
}

void glXGetSelectedEvent(Display * dpy, GLXDrawable draw, unsigned long * event_mask)
{
    return Binding::XGetSelectedEvent(dpy, draw, event_mask);
}

void glXGetSelectedEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long * mask)
{
    return Binding::XGetSelectedEventSGIX(dpy, drawable, mask);
}

int glXGetSwapIntervalMESA()
{
    return Binding::XGetSwapIntervalMESA();
}

Bool glXGetSyncValuesOML(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc)
{
    return Binding::XGetSyncValuesOML(dpy, drawable, ust, msc, sbc);
}

Status glXGetTransparentIndexSUN(Display * dpy, Window overlay, Window underlay, long * pTransparentIndex)
{
    return Binding::XGetTransparentIndexSUN(dpy, overlay, underlay, pTransparentIndex);
}

int glXGetVideoDeviceNV(Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice)
{
    return Binding::XGetVideoDeviceNV(dpy, screen, numVideoDevices, pVideoDevice);
}

int glXGetVideoInfoNV(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo)
{
    return Binding::XGetVideoInfoNV(dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
}

int glXGetVideoSyncSGI(unsigned int * count)
{
    return Binding::XGetVideoSyncSGI(count);
}

XVisualInfo * glXGetVisualFromFBConfig(Display * dpy, GLXFBConfig config)
{
    return Binding::XGetVisualFromFBConfig(dpy, config);
}

XVisualInfo * glXGetVisualFromFBConfigSGIX(Display * dpy, GLXFBConfigSGIX config)
{
    return Binding::XGetVisualFromFBConfigSGIX(dpy, config);
}

int glXHyperpipeAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * attribList)
{
    return Binding::XHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, attribList);
}

int glXHyperpipeConfigSGIX(Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId)
{
    return Binding::XHyperpipeConfigSGIX(dpy, networkId, npipes, cfg, hpId);
}

GLXContext glXImportContextEXT(Display * dpy, GLXContextID contextID)
{
    return Binding::XImportContextEXT(dpy, contextID);
}

Bool glXIsDirect(Display * dpy, GLXContext ctx)
{
    return Binding::XIsDirect(dpy, ctx);
}

Bool glXJoinSwapGroupNV(Display * dpy, GLXDrawable drawable, GLuint group)
{
    return Binding::XJoinSwapGroupNV(dpy, drawable, group);
}

void glXJoinSwapGroupSGIX(Display * dpy, GLXDrawable drawable, GLXDrawable member)
{
    return Binding::XJoinSwapGroupSGIX(dpy, drawable, member);
}

void glXLockVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device)
{
    return Binding::XLockVideoCaptureDeviceNV(dpy, device);
}

Bool glXMakeAssociatedContextCurrentAMD(GLXContext ctx)
{
    return Binding::XMakeAssociatedContextCurrentAMD(ctx);
}

Bool glXMakeContextCurrent(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
    return Binding::XMakeContextCurrent(dpy, draw, read, ctx);
}

Bool glXMakeCurrent(Display * dpy, GLXDrawable drawable, GLXContext ctx)
{
    return Binding::XMakeCurrent(dpy, drawable, ctx);
}

Bool glXMakeCurrentReadSGI(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
    return Binding::XMakeCurrentReadSGI(dpy, draw, read, ctx);
}

void glXNamedCopyBufferSubDataNV(Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return Binding::XNamedCopyBufferSubDataNV(dpy, readCtx, writeCtx, readBuffer, writeBuffer, readOffset, writeOffset, size);
}

int glXQueryChannelDeltasSGIX(Display * display, int screen, int channel, int * x, int * y, int * w, int * h)
{
    return Binding::XQueryChannelDeltasSGIX(display, screen, channel, x, y, w, h);
}

int glXQueryChannelRectSGIX(Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh)
{
    return Binding::XQueryChannelRectSGIX(display, screen, channel, dx, dy, dw, dh);
}

int glXQueryContext(Display * dpy, GLXContext ctx, int attribute, int * value)
{
    return Binding::XQueryContext(dpy, ctx, attribute, value);
}

int glXQueryContextInfoEXT(Display * dpy, GLXContext context, int attribute, int * value)
{
    return Binding::XQueryContextInfoEXT(dpy, context, attribute, value);
}

Bool glXQueryCurrentRendererIntegerMESA(int attribute, unsigned int * value)
{
    return Binding::XQueryCurrentRendererIntegerMESA(attribute, value);
}

const char * glXQueryCurrentRendererStringMESA(int attribute)
{
    return Binding::XQueryCurrentRendererStringMESA(attribute);
}

void glXQueryDrawable(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value)
{
    return Binding::XQueryDrawable(dpy, draw, attribute, value);
}

Bool glXQueryExtension(Display * dpy, int * errorb, int * event)
{
    return Binding::XQueryExtension(dpy, errorb, event);
}

const char * glXQueryExtensionsString(Display * dpy, int screen)
{
    return Binding::XQueryExtensionsString(dpy, screen);
}

Bool glXQueryFrameCountNV(Display * dpy, int screen, GLuint * count)
{
    return Binding::XQueryFrameCountNV(dpy, screen, count);
}

int glXQueryGLXPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value)
{
    return Binding::XQueryGLXPbufferSGIX(dpy, pbuf, attribute, value);
}

int glXQueryHyperpipeAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList)
{
    return Binding::XQueryHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, returnAttribList);
}

int glXQueryHyperpipeBestAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList)
{
    return Binding::XQueryHyperpipeBestAttribSGIX(dpy, timeSlice, attrib, size, attribList, returnAttribList);
}

GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display * dpy, int hpId, int * npipes)
{
    return Binding::XQueryHyperpipeConfigSGIX(dpy, hpId, npipes);
}

GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display * dpy, int * npipes)
{
    return Binding::XQueryHyperpipeNetworkSGIX(dpy, npipes);
}

Bool glXQueryMaxSwapBarriersSGIX(Display * dpy, int screen, int * max)
{
    return Binding::XQueryMaxSwapBarriersSGIX(dpy, screen, max);
}

Bool glXQueryMaxSwapGroupsNV(Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers)
{
    return Binding::XQueryMaxSwapGroupsNV(dpy, screen, maxGroups, maxBarriers);
}

Bool glXQueryRendererIntegerMESA(Display * dpy, int screen, int renderer, int attribute, unsigned int * value)
{
    return Binding::XQueryRendererIntegerMESA(dpy, screen, renderer, attribute, value);
}

const char * glXQueryRendererStringMESA(Display * dpy, int screen, int renderer, int attribute)
{
    return Binding::XQueryRendererStringMESA(dpy, screen, renderer, attribute);
}

const char * glXQueryServerString(Display * dpy, int screen, int name)
{
    return Binding::XQueryServerString(dpy, screen, name);
}

Bool glXQuerySwapGroupNV(Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier)
{
    return Binding::XQuerySwapGroupNV(dpy, drawable, group, barrier);
}

Bool glXQueryVersion(Display * dpy, int * maj, int * min)
{
    return Binding::XQueryVersion(dpy, maj, min);
}

int glXQueryVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value)
{
    return Binding::XQueryVideoCaptureDeviceNV(dpy, device, attribute, value);
}

Bool glXReleaseBuffersMESA(Display * dpy, GLXDrawable drawable)
{
    return Binding::XReleaseBuffersMESA(dpy, drawable);
}

void glXReleaseTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer)
{
    return Binding::XReleaseTexImageEXT(dpy, drawable, buffer);
}

void glXReleaseVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device)
{
    return Binding::XReleaseVideoCaptureDeviceNV(dpy, device);
}

int glXReleaseVideoDeviceNV(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice)
{
    return Binding::XReleaseVideoDeviceNV(dpy, screen, VideoDevice);
}

int glXReleaseVideoImageNV(Display * dpy, GLXPbuffer pbuf)
{
    return Binding::XReleaseVideoImageNV(dpy, pbuf);
}

Bool glXResetFrameCountNV(Display * dpy, int screen)
{
    return Binding::XResetFrameCountNV(dpy, screen);
}

void glXSelectEvent(Display * dpy, GLXDrawable draw, unsigned long event_mask)
{
    return Binding::XSelectEvent(dpy, draw, event_mask);
}

void glXSelectEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long mask)
{
    return Binding::XSelectEventSGIX(dpy, drawable, mask);
}

int glXSendPbufferToVideoNV(Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock)
{
    return Binding::XSendPbufferToVideoNV(dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock);
}

Bool glXSet3DfxModeMESA(int mode)
{
    return Binding::XSet3DfxModeMESA(mode);
}

void glXSwapBuffers(Display * dpy, GLXDrawable drawable)
{
    return Binding::XSwapBuffers(dpy, drawable);
}

int64_t glXSwapBuffersMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder)
{
    return Binding::XSwapBuffersMscOML(dpy, drawable, target_msc, divisor, remainder);
}

void glXSwapIntervalEXT(Display * dpy, GLXDrawable drawable, int interval)
{
    return Binding::XSwapIntervalEXT(dpy, drawable, interval);
}

int glXSwapIntervalMESA(unsigned int interval)
{
    return Binding::XSwapIntervalMESA(interval);
}

int glXSwapIntervalSGI(int interval)
{
    return Binding::XSwapIntervalSGI(interval);
}

void glXUseXFont(Font font, int first, int count, int list)
{
    return Binding::XUseXFont(font, first, count, list);
}

Bool glXWaitForMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc)
{
    return Binding::XWaitForMscOML(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc);
}

Bool glXWaitForSbcOML(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc)
{
    return Binding::XWaitForSbcOML(dpy, drawable, target_sbc, ust, msc, sbc);
}

void glXWaitGL()
{
    return Binding::XWaitGL();
}

int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int * count)
{
    return Binding::XWaitVideoSyncSGI(divisor, remainder, count);
}

void glXWaitX()
{
    return Binding::XWaitX();
}




} // namespace glx
