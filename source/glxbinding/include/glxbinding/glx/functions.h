
#pragma once


#include <glxbinding/glxbinding_api.h>

#include <glxbinding/nogl.h>
#include <glxbinding/glx/types.h>


namespace glx
{


























GLXBINDING_API Bool glXAssociateDMPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
GLXBINDING_API int glXBindChannelToWindowSGIX(Display * display, int screen, int channel, Window window);
GLXBINDING_API int glXBindHyperpipeSGIX(Display * dpy, int hpId);
GLXBINDING_API Bool glXBindSwapBarrierNV(Display * dpy, GLuint group, GLuint barrier);
GLXBINDING_API void glXBindSwapBarrierSGIX(Display * dpy, GLXDrawable drawable, int barrier);
GLXBINDING_API void glXBindTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
GLXBINDING_API int glXBindVideoCaptureDeviceNV(Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
GLXBINDING_API int glXBindVideoDeviceNV(Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
GLXBINDING_API int glXBindVideoImageNV(Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
GLXBINDING_API void glXBlitContextFramebufferAMD(GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLXBINDING_API int glXChannelRectSGIX(Display * display, int screen, int channel, int x, int y, int w, int h);
GLXBINDING_API int glXChannelRectSyncSGIX(Display * display, int screen, int channel, GLenum synctype);
GLXBINDING_API GLXFBConfig * glXChooseFBConfig(Display * dpy, int screen, const int * attrib_list, int * nelements);
GLXBINDING_API GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display * dpy, int screen, int * attrib_list, int * nelements);
GLXBINDING_API XVisualInfo * glXChooseVisual(Display * dpy, int screen, int * attribList);
GLXBINDING_API void glXCopyBufferSubDataNV(Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLXBINDING_API void glXCopyContext(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
GLXBINDING_API void glXCopyImageSubDataNV(Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
GLXBINDING_API void glXCopySubBufferMESA(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
GLXBINDING_API GLXContext glXCreateAssociatedContextAMD(unsigned int id, GLXContext share_list);
GLXBINDING_API GLXContext glXCreateAssociatedContextAttribsAMD(unsigned int id, GLXContext share_context, const int * attribList);
GLXBINDING_API GLXContext glXCreateContext(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
GLXBINDING_API GLXContext glXCreateContextAttribsARB(Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
GLXBINDING_API GLXContext glXCreateContextWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
GLXBINDING_API GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
GLXBINDING_API GLXPixmap glXCreateGLXPixmap(Display * dpy, XVisualInfo * visual, Pixmap pixmap);
GLXBINDING_API GLXPixmap glXCreateGLXPixmapMESA(Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
GLXBINDING_API GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
GLXBINDING_API GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
GLXBINDING_API GLXContext glXCreateNewContext(Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
GLXBINDING_API GLXPbuffer glXCreatePbuffer(Display * dpy, GLXFBConfig config, const int * attrib_list);
GLXBINDING_API GLXPixmap glXCreatePixmap(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
GLXBINDING_API GLXWindow glXCreateWindow(Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
GLXBINDING_API void glXCushionSGI(Display * dpy, Window window, float cushion);
GLXBINDING_API Bool glXDelayBeforeSwapNV(Display * dpy, GLXDrawable drawable, GLfloat seconds);
GLXBINDING_API Bool glXDeleteAssociatedContextAMD(GLXContext ctx);
GLXBINDING_API void glXDestroyContext(Display * dpy, GLXContext ctx);
GLXBINDING_API void glXDestroyGLXPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuf);
GLXBINDING_API void glXDestroyGLXPixmap(Display * dpy, GLXPixmap pixmap);
GLXBINDING_API void glXDestroyGLXVideoSourceSGIX(Display * dpy, GLXVideoSourceSGIX glxvideosource);
GLXBINDING_API int glXDestroyHyperpipeConfigSGIX(Display * dpy, int hpId);
GLXBINDING_API void glXDestroyPbuffer(Display * dpy, GLXPbuffer pbuf);
GLXBINDING_API void glXDestroyPixmap(Display * dpy, GLXPixmap pixmap);
GLXBINDING_API void glXDestroyWindow(Display * dpy, GLXWindow win);
GLXBINDING_API GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display * dpy, int screen, int * nelements);
GLXBINDING_API unsigned int * glXEnumerateVideoDevicesNV(Display * dpy, int screen, int * nelements);
GLXBINDING_API void glXFreeContextEXT(Display * dpy, GLXContext context);
GLXBINDING_API unsigned int glXGetAGPOffsetMESA(const void * pointer);
GLXBINDING_API const char * glXGetClientString(Display * dpy, int name);
GLXBINDING_API int glXGetConfig(Display * dpy, XVisualInfo * visual, int attrib, int * value);
GLXBINDING_API unsigned int glXGetContextGPUIDAMD(GLXContext ctx);
GLXBINDING_API GLXContextID glXGetContextIDEXT(const GLXContext context);
GLXBINDING_API GLXContext glXGetCurrentAssociatedContextAMD();
GLXBINDING_API GLXContext glXGetCurrentContext();
GLXBINDING_API Display * glXGetCurrentDisplay();
GLXBINDING_API Display * glXGetCurrentDisplayEXT();
GLXBINDING_API GLXDrawable glXGetCurrentDrawable();
GLXBINDING_API GLXDrawable glXGetCurrentReadDrawable();
GLXBINDING_API GLXDrawable glXGetCurrentReadDrawableSGI();
GLXBINDING_API int glXGetFBConfigAttrib(Display * dpy, GLXFBConfig config, int attribute, int * value);
GLXBINDING_API int glXGetFBConfigAttribSGIX(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
GLXBINDING_API GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display * dpy, XVisualInfo * vis);
GLXBINDING_API GLXFBConfig * glXGetFBConfigs(Display * dpy, int screen, int * nelements);
GLXBINDING_API unsigned int glXGetGPUIDsAMD(unsigned int maxCount, unsigned int * ids);
GLXBINDING_API int glXGetGPUInfoAMD(unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
GLXBINDING_API Bool glXGetMscRateOML(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
GLXBINDING_API __GLXextFuncPtr glXGetProcAddress(const GLubyte * procName);
GLXBINDING_API __GLXextFuncPtr glXGetProcAddressARB(const GLubyte * procName);
GLXBINDING_API void glXGetSelectedEvent(Display * dpy, GLXDrawable draw, unsigned long * event_mask);
GLXBINDING_API void glXGetSelectedEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long * mask);
GLXBINDING_API int glXGetSwapIntervalMESA();
GLXBINDING_API Bool glXGetSyncValuesOML(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
GLXBINDING_API Status glXGetTransparentIndexSUN(Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);
GLXBINDING_API int glXGetVideoDeviceNV(Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
GLXBINDING_API int glXGetVideoInfoNV(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
GLXBINDING_API int glXGetVideoSyncSGI(unsigned int * count);
GLXBINDING_API XVisualInfo * glXGetVisualFromFBConfig(Display * dpy, GLXFBConfig config);
GLXBINDING_API XVisualInfo * glXGetVisualFromFBConfigSGIX(Display * dpy, GLXFBConfigSGIX config);
GLXBINDING_API int glXHyperpipeAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * attribList);
GLXBINDING_API int glXHyperpipeConfigSGIX(Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
GLXBINDING_API GLXContext glXImportContextEXT(Display * dpy, GLXContextID contextID);
GLXBINDING_API Bool glXIsDirect(Display * dpy, GLXContext ctx);
GLXBINDING_API Bool glXJoinSwapGroupNV(Display * dpy, GLXDrawable drawable, GLuint group);
GLXBINDING_API void glXJoinSwapGroupSGIX(Display * dpy, GLXDrawable drawable, GLXDrawable member);
GLXBINDING_API void glXLockVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device);
GLXBINDING_API Bool glXMakeAssociatedContextCurrentAMD(GLXContext ctx);
GLXBINDING_API Bool glXMakeContextCurrent(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
GLXBINDING_API Bool glXMakeCurrent(Display * dpy, GLXDrawable drawable, GLXContext ctx);
GLXBINDING_API Bool glXMakeCurrentReadSGI(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
GLXBINDING_API void glXNamedCopyBufferSubDataNV(Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLXBINDING_API int glXQueryChannelDeltasSGIX(Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
GLXBINDING_API int glXQueryChannelRectSGIX(Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
GLXBINDING_API int glXQueryContext(Display * dpy, GLXContext ctx, int attribute, int * value);
GLXBINDING_API int glXQueryContextInfoEXT(Display * dpy, GLXContext context, int attribute, int * value);
GLXBINDING_API Bool glXQueryCurrentRendererIntegerMESA(int attribute, unsigned int * value);
GLXBINDING_API const char * glXQueryCurrentRendererStringMESA(int attribute);
GLXBINDING_API void glXQueryDrawable(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
GLXBINDING_API Bool glXQueryExtension(Display * dpy, int * errorb, int * event);
GLXBINDING_API const char * glXQueryExtensionsString(Display * dpy, int screen);
GLXBINDING_API Bool glXQueryFrameCountNV(Display * dpy, int screen, GLuint * count);
GLXBINDING_API int glXQueryGLXPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
GLXBINDING_API int glXQueryHyperpipeAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
GLXBINDING_API int glXQueryHyperpipeBestAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
GLXBINDING_API GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display * dpy, int hpId, int * npipes);
GLXBINDING_API GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display * dpy, int * npipes);
GLXBINDING_API Bool glXQueryMaxSwapBarriersSGIX(Display * dpy, int screen, int * max);
GLXBINDING_API Bool glXQueryMaxSwapGroupsNV(Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
GLXBINDING_API Bool glXQueryRendererIntegerMESA(Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
GLXBINDING_API const char * glXQueryRendererStringMESA(Display * dpy, int screen, int renderer, int attribute);
GLXBINDING_API const char * glXQueryServerString(Display * dpy, int screen, int name);
GLXBINDING_API Bool glXQuerySwapGroupNV(Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
GLXBINDING_API Bool glXQueryVersion(Display * dpy, int * maj, int * min);
GLXBINDING_API int glXQueryVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
GLXBINDING_API Bool glXReleaseBuffersMESA(Display * dpy, GLXDrawable drawable);
GLXBINDING_API void glXReleaseTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer);
GLXBINDING_API void glXReleaseVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device);
GLXBINDING_API int glXReleaseVideoDeviceNV(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
GLXBINDING_API int glXReleaseVideoImageNV(Display * dpy, GLXPbuffer pbuf);
GLXBINDING_API Bool glXResetFrameCountNV(Display * dpy, int screen);
GLXBINDING_API void glXSelectEvent(Display * dpy, GLXDrawable draw, unsigned long event_mask);
GLXBINDING_API void glXSelectEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long mask);
GLXBINDING_API int glXSendPbufferToVideoNV(Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
GLXBINDING_API Bool glXSet3DfxModeMESA(int mode);
GLXBINDING_API void glXSwapBuffers(Display * dpy, GLXDrawable drawable);
GLXBINDING_API int64_t glXSwapBuffersMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
GLXBINDING_API void glXSwapIntervalEXT(Display * dpy, GLXDrawable drawable, int interval);
GLXBINDING_API int glXSwapIntervalMESA(unsigned int interval);
GLXBINDING_API int glXSwapIntervalSGI(int interval);
GLXBINDING_API void glXUseXFont(Font font, int first, int count, int list);
GLXBINDING_API Bool glXWaitForMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
GLXBINDING_API Bool glXWaitForSbcOML(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
GLXBINDING_API void glXWaitGL();
GLXBINDING_API int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int * count);
GLXBINDING_API void glXWaitX();





} // namespace glx


// Include function patches due to dinstinguished types GLint, GLuint, GLenum, and GLboolean
#include <glxbinding/glx/functions-patches.h>
