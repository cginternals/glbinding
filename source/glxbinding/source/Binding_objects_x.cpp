
#include "Binding_pch.h"


using namespace glx;


namespace glxbinding
{


Function<Bool, Display *, GLXPbufferSGIX, DMparams *, DMbuffer> Binding::XAssociateDMPbufferSGIX("glXAssociateDMPbufferSGIX");
Function<int, Display *, int, int, Window> Binding::XBindChannelToWindowSGIX("glXBindChannelToWindowSGIX");
Function<int, Display *, int> Binding::XBindHyperpipeSGIX("glXBindHyperpipeSGIX");
Function<Bool, Display *, GLuint, GLuint> Binding::XBindSwapBarrierNV("glXBindSwapBarrierNV");
Function<void, Display *, GLXDrawable, int> Binding::XBindSwapBarrierSGIX("glXBindSwapBarrierSGIX");
Function<void, Display *, GLXDrawable, int, const int *> Binding::XBindTexImageEXT("glXBindTexImageEXT");
Function<int, Display *, unsigned int, GLXVideoCaptureDeviceNV> Binding::XBindVideoCaptureDeviceNV("glXBindVideoCaptureDeviceNV");
Function<int, Display *, unsigned int, unsigned int, const int *> Binding::XBindVideoDeviceNV("glXBindVideoDeviceNV");
Function<int, Display *, GLXVideoDeviceNV, GLXPbuffer, int> Binding::XBindVideoImageNV("glXBindVideoImageNV");
Function<void, GLXContext, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum> Binding::XBlitContextFramebufferAMD("glXBlitContextFramebufferAMD");
Function<int, Display *, int, int, int, int, int, int> Binding::XChannelRectSGIX("glXChannelRectSGIX");
Function<int, Display *, int, int, GLenum> Binding::XChannelRectSyncSGIX("glXChannelRectSyncSGIX");
Function<GLXFBConfig *, Display *, int, const int *, int *> Binding::XChooseFBConfig("glXChooseFBConfig");
Function<GLXFBConfigSGIX *, Display *, int, int *, int *> Binding::XChooseFBConfigSGIX("glXChooseFBConfigSGIX");
Function<XVisualInfo *, Display *, int, int *> Binding::XChooseVisual("glXChooseVisual");
Function<void, Display *, GLXContext, GLXContext, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::XCopyBufferSubDataNV("glXCopyBufferSubDataNV");
Function<void, Display *, GLXContext, GLXContext, unsigned long> Binding::XCopyContext("glXCopyContext");
Function<void, Display *, GLXContext, GLuint, GLenum, GLint, GLint, GLint, GLint, GLXContext, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::XCopyImageSubDataNV("glXCopyImageSubDataNV");
Function<void, Display *, GLXDrawable, int, int, int, int> Binding::XCopySubBufferMESA("glXCopySubBufferMESA");
Function<GLXContext, unsigned int, GLXContext> Binding::XCreateAssociatedContextAMD("glXCreateAssociatedContextAMD");
Function<GLXContext, unsigned int, GLXContext, const int *> Binding::XCreateAssociatedContextAttribsAMD("glXCreateAssociatedContextAttribsAMD");
Function<GLXContext, Display *, XVisualInfo *, GLXContext, Bool> Binding::XCreateContext("glXCreateContext");
Function<GLXContext, Display *, GLXFBConfig, GLXContext, Bool, const int *> Binding::XCreateContextAttribsARB("glXCreateContextAttribsARB");
Function<GLXContext, Display *, GLXFBConfigSGIX, int, GLXContext, Bool> Binding::XCreateContextWithConfigSGIX("glXCreateContextWithConfigSGIX");
Function<GLXPbufferSGIX, Display *, GLXFBConfigSGIX, unsigned int, unsigned int, int *> Binding::XCreateGLXPbufferSGIX("glXCreateGLXPbufferSGIX");
Function<GLXPixmap, Display *, XVisualInfo *, Pixmap> Binding::XCreateGLXPixmap("glXCreateGLXPixmap");
Function<GLXPixmap, Display *, XVisualInfo *, Pixmap, Colormap> Binding::XCreateGLXPixmapMESA("glXCreateGLXPixmapMESA");
Function<GLXPixmap, Display *, GLXFBConfigSGIX, Pixmap> Binding::XCreateGLXPixmapWithConfigSGIX("glXCreateGLXPixmapWithConfigSGIX");
Function<GLXVideoSourceSGIX, Display *, int, VLServer, VLPath, int, VLNode> Binding::XCreateGLXVideoSourceSGIX("glXCreateGLXVideoSourceSGIX");
Function<GLXContext, Display *, GLXFBConfig, int, GLXContext, Bool> Binding::XCreateNewContext("glXCreateNewContext");
Function<GLXPbuffer, Display *, GLXFBConfig, const int *> Binding::XCreatePbuffer("glXCreatePbuffer");
Function<GLXPixmap, Display *, GLXFBConfig, Pixmap, const int *> Binding::XCreatePixmap("glXCreatePixmap");
Function<GLXWindow, Display *, GLXFBConfig, Window, const int *> Binding::XCreateWindow("glXCreateWindow");
Function<void, Display *, Window, float> Binding::XCushionSGI("glXCushionSGI");
Function<Bool, Display *, GLXDrawable, GLfloat> Binding::XDelayBeforeSwapNV("glXDelayBeforeSwapNV");
Function<Bool, GLXContext> Binding::XDeleteAssociatedContextAMD("glXDeleteAssociatedContextAMD");
Function<void, Display *, GLXContext> Binding::XDestroyContext("glXDestroyContext");
Function<void, Display *, GLXPbufferSGIX> Binding::XDestroyGLXPbufferSGIX("glXDestroyGLXPbufferSGIX");
Function<void, Display *, GLXPixmap> Binding::XDestroyGLXPixmap("glXDestroyGLXPixmap");
Function<void, Display *, GLXVideoSourceSGIX> Binding::XDestroyGLXVideoSourceSGIX("glXDestroyGLXVideoSourceSGIX");
Function<int, Display *, int> Binding::XDestroyHyperpipeConfigSGIX("glXDestroyHyperpipeConfigSGIX");
Function<void, Display *, GLXPbuffer> Binding::XDestroyPbuffer("glXDestroyPbuffer");
Function<void, Display *, GLXPixmap> Binding::XDestroyPixmap("glXDestroyPixmap");
Function<void, Display *, GLXWindow> Binding::XDestroyWindow("glXDestroyWindow");
Function<GLXVideoCaptureDeviceNV *, Display *, int, int *> Binding::XEnumerateVideoCaptureDevicesNV("glXEnumerateVideoCaptureDevicesNV");
Function<unsigned int *, Display *, int, int *> Binding::XEnumerateVideoDevicesNV("glXEnumerateVideoDevicesNV");
Function<void, Display *, GLXContext> Binding::XFreeContextEXT("glXFreeContextEXT");
Function<unsigned int, const void *> Binding::XGetAGPOffsetMESA("glXGetAGPOffsetMESA");
Function<const char *, Display *, int> Binding::XGetClientString("glXGetClientString");
Function<int, Display *, XVisualInfo *, int, int *> Binding::XGetConfig("glXGetConfig");
Function<unsigned int, GLXContext> Binding::XGetContextGPUIDAMD("glXGetContextGPUIDAMD");
Function<GLXContextID, const GLXContext> Binding::XGetContextIDEXT("glXGetContextIDEXT");
Function<GLXContext> Binding::XGetCurrentAssociatedContextAMD("glXGetCurrentAssociatedContextAMD");
Function<GLXContext> Binding::XGetCurrentContext("glXGetCurrentContext");
Function<Display *> Binding::XGetCurrentDisplay("glXGetCurrentDisplay");
Function<Display *> Binding::XGetCurrentDisplayEXT("glXGetCurrentDisplayEXT");
Function<GLXDrawable> Binding::XGetCurrentDrawable("glXGetCurrentDrawable");
Function<GLXDrawable> Binding::XGetCurrentReadDrawable("glXGetCurrentReadDrawable");
Function<GLXDrawable> Binding::XGetCurrentReadDrawableSGI("glXGetCurrentReadDrawableSGI");
Function<int, Display *, GLXFBConfig, int, int *> Binding::XGetFBConfigAttrib("glXGetFBConfigAttrib");
Function<int, Display *, GLXFBConfigSGIX, int, int *> Binding::XGetFBConfigAttribSGIX("glXGetFBConfigAttribSGIX");
Function<GLXFBConfigSGIX, Display *, XVisualInfo *> Binding::XGetFBConfigFromVisualSGIX("glXGetFBConfigFromVisualSGIX");
Function<GLXFBConfig *, Display *, int, int *> Binding::XGetFBConfigs("glXGetFBConfigs");
Function<unsigned int, unsigned int, unsigned int *> Binding::XGetGPUIDsAMD("glXGetGPUIDsAMD");
Function<int, unsigned int, int, GLenum, unsigned int, void *> Binding::XGetGPUInfoAMD("glXGetGPUInfoAMD");
Function<Bool, Display *, GLXDrawable, int32_t *, int32_t *> Binding::XGetMscRateOML("glXGetMscRateOML");
Function<__GLXextFuncPtr, const GLubyte *> Binding::XGetProcAddress("glXGetProcAddress");
Function<__GLXextFuncPtr, const GLubyte *> Binding::XGetProcAddressARB("glXGetProcAddressARB");
Function<void, Display *, GLXDrawable, unsigned long *> Binding::XGetSelectedEvent("glXGetSelectedEvent");
Function<void, Display *, GLXDrawable, unsigned long *> Binding::XGetSelectedEventSGIX("glXGetSelectedEventSGIX");
Function<int> Binding::XGetSwapIntervalMESA("glXGetSwapIntervalMESA");
Function<Bool, Display *, GLXDrawable, int64_t *, int64_t *, int64_t *> Binding::XGetSyncValuesOML("glXGetSyncValuesOML");
Function<Status, Display *, Window, Window, long *> Binding::XGetTransparentIndexSUN("glXGetTransparentIndexSUN");
Function<int, Display *, int, int, GLXVideoDeviceNV *> Binding::XGetVideoDeviceNV("glXGetVideoDeviceNV");
Function<int, Display *, int, GLXVideoDeviceNV, unsigned long *, unsigned long *> Binding::XGetVideoInfoNV("glXGetVideoInfoNV");
Function<int, unsigned int *> Binding::XGetVideoSyncSGI("glXGetVideoSyncSGI");
Function<XVisualInfo *, Display *, GLXFBConfig> Binding::XGetVisualFromFBConfig("glXGetVisualFromFBConfig");
Function<XVisualInfo *, Display *, GLXFBConfigSGIX> Binding::XGetVisualFromFBConfigSGIX("glXGetVisualFromFBConfigSGIX");
Function<int, Display *, int, int, int, void *> Binding::XHyperpipeAttribSGIX("glXHyperpipeAttribSGIX");
Function<int, Display *, int, int, GLXHyperpipeConfigSGIX *, int *> Binding::XHyperpipeConfigSGIX("glXHyperpipeConfigSGIX");
Function<GLXContext, Display *, GLXContextID> Binding::XImportContextEXT("glXImportContextEXT");
Function<Bool, Display *, GLXContext> Binding::XIsDirect("glXIsDirect");
Function<Bool, Display *, GLXDrawable, GLuint> Binding::XJoinSwapGroupNV("glXJoinSwapGroupNV");
Function<void, Display *, GLXDrawable, GLXDrawable> Binding::XJoinSwapGroupSGIX("glXJoinSwapGroupSGIX");
Function<void, Display *, GLXVideoCaptureDeviceNV> Binding::XLockVideoCaptureDeviceNV("glXLockVideoCaptureDeviceNV");
Function<Bool, GLXContext> Binding::XMakeAssociatedContextCurrentAMD("glXMakeAssociatedContextCurrentAMD");
Function<Bool, Display *, GLXDrawable, GLXDrawable, GLXContext> Binding::XMakeContextCurrent("glXMakeContextCurrent");
Function<Bool, Display *, GLXDrawable, GLXContext> Binding::XMakeCurrent("glXMakeCurrent");
Function<Bool, Display *, GLXDrawable, GLXDrawable, GLXContext> Binding::XMakeCurrentReadSGI("glXMakeCurrentReadSGI");
Function<void, Display *, GLXContext, GLXContext, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::XNamedCopyBufferSubDataNV("glXNamedCopyBufferSubDataNV");
Function<int, Display *, int, int, int *, int *, int *, int *> Binding::XQueryChannelDeltasSGIX("glXQueryChannelDeltasSGIX");
Function<int, Display *, int, int, int *, int *, int *, int *> Binding::XQueryChannelRectSGIX("glXQueryChannelRectSGIX");
Function<int, Display *, GLXContext, int, int *> Binding::XQueryContext("glXQueryContext");
Function<int, Display *, GLXContext, int, int *> Binding::XQueryContextInfoEXT("glXQueryContextInfoEXT");
Function<Bool, int, unsigned int *> Binding::XQueryCurrentRendererIntegerMESA("glXQueryCurrentRendererIntegerMESA");
Function<const char *, int> Binding::XQueryCurrentRendererStringMESA("glXQueryCurrentRendererStringMESA");
Function<void, Display *, GLXDrawable, int, unsigned int *> Binding::XQueryDrawable("glXQueryDrawable");
Function<Bool, Display *, int *, int *> Binding::XQueryExtension("glXQueryExtension");
Function<const char *, Display *, int> Binding::XQueryExtensionsString("glXQueryExtensionsString");
Function<Bool, Display *, int, GLuint *> Binding::XQueryFrameCountNV("glXQueryFrameCountNV");
Function<int, Display *, GLXPbufferSGIX, int, unsigned int *> Binding::XQueryGLXPbufferSGIX("glXQueryGLXPbufferSGIX");
Function<int, Display *, int, int, int, void *> Binding::XQueryHyperpipeAttribSGIX("glXQueryHyperpipeAttribSGIX");
Function<int, Display *, int, int, int, void *, void *> Binding::XQueryHyperpipeBestAttribSGIX("glXQueryHyperpipeBestAttribSGIX");
Function<GLXHyperpipeConfigSGIX *, Display *, int, int *> Binding::XQueryHyperpipeConfigSGIX("glXQueryHyperpipeConfigSGIX");
Function<GLXHyperpipeNetworkSGIX *, Display *, int *> Binding::XQueryHyperpipeNetworkSGIX("glXQueryHyperpipeNetworkSGIX");
Function<Bool, Display *, int, int *> Binding::XQueryMaxSwapBarriersSGIX("glXQueryMaxSwapBarriersSGIX");
Function<Bool, Display *, int, GLuint *, GLuint *> Binding::XQueryMaxSwapGroupsNV("glXQueryMaxSwapGroupsNV");
Function<Bool, Display *, int, int, int, unsigned int *> Binding::XQueryRendererIntegerMESA("glXQueryRendererIntegerMESA");
Function<const char *, Display *, int, int, int> Binding::XQueryRendererStringMESA("glXQueryRendererStringMESA");
Function<const char *, Display *, int, int> Binding::XQueryServerString("glXQueryServerString");
Function<Bool, Display *, GLXDrawable, GLuint *, GLuint *> Binding::XQuerySwapGroupNV("glXQuerySwapGroupNV");
Function<Bool, Display *, int *, int *> Binding::XQueryVersion("glXQueryVersion");
Function<int, Display *, GLXVideoCaptureDeviceNV, int, int *> Binding::XQueryVideoCaptureDeviceNV("glXQueryVideoCaptureDeviceNV");
Function<Bool, Display *, GLXDrawable> Binding::XReleaseBuffersMESA("glXReleaseBuffersMESA");
Function<void, Display *, GLXDrawable, int> Binding::XReleaseTexImageEXT("glXReleaseTexImageEXT");
Function<void, Display *, GLXVideoCaptureDeviceNV> Binding::XReleaseVideoCaptureDeviceNV("glXReleaseVideoCaptureDeviceNV");
Function<int, Display *, int, GLXVideoDeviceNV> Binding::XReleaseVideoDeviceNV("glXReleaseVideoDeviceNV");
Function<int, Display *, GLXPbuffer> Binding::XReleaseVideoImageNV("glXReleaseVideoImageNV");
Function<Bool, Display *, int> Binding::XResetFrameCountNV("glXResetFrameCountNV");
Function<void, Display *, GLXDrawable, unsigned long> Binding::XSelectEvent("glXSelectEvent");
Function<void, Display *, GLXDrawable, unsigned long> Binding::XSelectEventSGIX("glXSelectEventSGIX");
Function<int, Display *, GLXPbuffer, int, unsigned long *, GLboolean> Binding::XSendPbufferToVideoNV("glXSendPbufferToVideoNV");
Function<Bool, int> Binding::XSet3DfxModeMESA("glXSet3DfxModeMESA");
Function<void, Display *, GLXDrawable> Binding::XSwapBuffers("glXSwapBuffers");
Function<int64_t, Display *, GLXDrawable, int64_t, int64_t, int64_t> Binding::XSwapBuffersMscOML("glXSwapBuffersMscOML");
Function<void, Display *, GLXDrawable, int> Binding::XSwapIntervalEXT("glXSwapIntervalEXT");
Function<int, unsigned int> Binding::XSwapIntervalMESA("glXSwapIntervalMESA");
Function<int, int> Binding::XSwapIntervalSGI("glXSwapIntervalSGI");
Function<void, Font, int, int, int> Binding::XUseXFont("glXUseXFont");
Function<Bool, Display *, GLXDrawable, int64_t, int64_t, int64_t, int64_t *, int64_t *, int64_t *> Binding::XWaitForMscOML("glXWaitForMscOML");
Function<Bool, Display *, GLXDrawable, int64_t, int64_t *, int64_t *, int64_t *> Binding::XWaitForSbcOML("glXWaitForSbcOML");
Function<void> Binding::XWaitGL("glXWaitGL");
Function<int, int, int, unsigned int *> Binding::XWaitVideoSyncSGI("glXWaitVideoSyncSGI");
Function<void> Binding::XWaitX("glXWaitX");



} // namespace glxbinding
