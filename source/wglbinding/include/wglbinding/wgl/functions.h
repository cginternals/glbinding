
#pragma once


#include <wglbinding/wglbinding_api.h>

#include <wglbinding/nogl.h>
#include <wglbinding/wgl/types.h>


namespace wgl
{


WGLBINDING_API int ChoosePixelFormat(HDC hDc, const PIXELFORMATDESCRIPTOR * pPfd);
WGLBINDING_API int DescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR * ppfd);
WGLBINDING_API UINT GetEnhMetaFilePixelFormat(HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR * ppfd);
WGLBINDING_API int GetPixelFormat(HDC hdc);
WGLBINDING_API BOOL SetPixelFormat(HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR * ppfd);
WGLBINDING_API BOOL SwapBuffers(HDC hdc);


WGLBINDING_API void * wglAllocateMemoryNV(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
WGLBINDING_API BOOL wglAssociateImageBufferEventsI3D(HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count);

WGLBINDING_API BOOL wglBeginFrameTrackingI3D();
WGLBINDING_API GLboolean wglBindDisplayColorTableEXT(GLushort id);
WGLBINDING_API BOOL wglBindSwapBarrierNV(GLuint group, GLuint barrier);
WGLBINDING_API BOOL wglBindTexImageARB(HPBUFFERARB hPbuffer, int iBuffer);
WGLBINDING_API BOOL wglBindVideoCaptureDeviceNV(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
WGLBINDING_API BOOL wglBindVideoDeviceNV(HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
WGLBINDING_API BOOL wglBindVideoImageNV(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
WGLBINDING_API VOID wglBlitContextFramebufferAMD(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

WGLBINDING_API BOOL wglChoosePixelFormatARB(HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
WGLBINDING_API BOOL wglChoosePixelFormatEXT(HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
WGLBINDING_API BOOL wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
WGLBINDING_API BOOL wglCopyImageSubDataNV(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
WGLBINDING_API HDC wglCreateAffinityDCNV(const HGPUNV * phGpuList);
WGLBINDING_API HGLRC wglCreateAssociatedContextAMD(UINT id);
WGLBINDING_API HGLRC wglCreateAssociatedContextAttribsAMD(UINT id, HGLRC hShareContext, const int * attribList);
WGLBINDING_API HANDLE wglCreateBufferRegionARB(HDC hDC, int iLayerPlane, UINT uType);
WGLBINDING_API HGLRC wglCreateContext(HDC hDc);
WGLBINDING_API HGLRC wglCreateContextAttribsARB(HDC hDC, HGLRC hShareContext, const int * attribList);
WGLBINDING_API GLboolean wglCreateDisplayColorTableEXT(GLushort id);
WGLBINDING_API LPVOID wglCreateImageBufferI3D(HDC hDC, DWORD dwSize, UINT uFlags);
WGLBINDING_API HGLRC wglCreateLayerContext(HDC hDc, int level);
WGLBINDING_API HPBUFFERARB wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
WGLBINDING_API HPBUFFEREXT wglCreatePbufferEXT(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);

WGLBINDING_API BOOL wglDXCloseDeviceNV(HANDLE hDevice);
WGLBINDING_API BOOL wglDXLockObjectsNV(HANDLE hDevice, GLint count, HANDLE * hObjects);
WGLBINDING_API BOOL wglDXObjectAccessNV(HANDLE hObject, GLenum access);
WGLBINDING_API HANDLE wglDXOpenDeviceNV(void * dxDevice);
WGLBINDING_API HANDLE wglDXRegisterObjectNV(HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
WGLBINDING_API BOOL wglDXSetResourceShareHandleNV(void * dxObject, HANDLE shareHandle);
WGLBINDING_API BOOL wglDXUnlockObjectsNV(HANDLE hDevice, GLint count, HANDLE * hObjects);
WGLBINDING_API BOOL wglDXUnregisterObjectNV(HANDLE hDevice, HANDLE hObject);
WGLBINDING_API BOOL wglDelayBeforeSwapNV(HDC hDC, GLfloat seconds);
WGLBINDING_API BOOL wglDeleteAssociatedContextAMD(HGLRC hglrc);
WGLBINDING_API VOID wglDeleteBufferRegionARB(HANDLE hRegion);
WGLBINDING_API BOOL wglDeleteContext(HGLRC oldContext);
WGLBINDING_API BOOL wglDeleteDCNV(HDC hdc);
WGLBINDING_API BOOL wglDescribeLayerPlane(HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);
WGLBINDING_API VOID wglDestroyDisplayColorTableEXT(GLushort id);
WGLBINDING_API BOOL wglDestroyImageBufferI3D(HDC hDC, LPVOID pAddress);
WGLBINDING_API BOOL wglDestroyPbufferARB(HPBUFFERARB hPbuffer);
WGLBINDING_API BOOL wglDestroyPbufferEXT(HPBUFFEREXT hPbuffer);
WGLBINDING_API BOOL wglDisableFrameLockI3D();
WGLBINDING_API BOOL wglDisableGenlockI3D(HDC hDC);

WGLBINDING_API BOOL wglEnableFrameLockI3D();
WGLBINDING_API BOOL wglEnableGenlockI3D(HDC hDC);
WGLBINDING_API BOOL wglEndFrameTrackingI3D();
WGLBINDING_API BOOL wglEnumGpuDevicesNV(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
WGLBINDING_API BOOL wglEnumGpusFromAffinityDCNV(HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu);
WGLBINDING_API BOOL wglEnumGpusNV(UINT iGpuIndex, HGPUNV * phGpu);
WGLBINDING_API UINT wglEnumerateVideoCaptureDevicesNV(HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList);
WGLBINDING_API int wglEnumerateVideoDevicesNV(HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList);

WGLBINDING_API void wglFreeMemoryNV(void * pointer);

WGLBINDING_API BOOL wglGenlockSampleRateI3D(HDC hDC, UINT uRate);
WGLBINDING_API BOOL wglGenlockSourceDelayI3D(HDC hDC, UINT uDelay);
WGLBINDING_API BOOL wglGenlockSourceEdgeI3D(HDC hDC, UINT uEdge);
WGLBINDING_API BOOL wglGenlockSourceI3D(HDC hDC, UINT uSource);
WGLBINDING_API UINT wglGetContextGPUIDAMD(HGLRC hglrc);
WGLBINDING_API HGLRC wglGetCurrentAssociatedContextAMD();
WGLBINDING_API HGLRC wglGetCurrentContext();
WGLBINDING_API HDC wglGetCurrentDC();
WGLBINDING_API HDC wglGetCurrentReadDCARB();
WGLBINDING_API HDC wglGetCurrentReadDCEXT();
WGLBINDING_API BOOL wglGetDigitalVideoParametersI3D(HDC hDC, int iAttribute, int * piValue);
WGLBINDING_API const char * wglGetExtensionsStringARB(HDC hdc);
WGLBINDING_API const char * wglGetExtensionsStringEXT();
WGLBINDING_API BOOL wglGetFrameUsageI3D(float * pUsage);
WGLBINDING_API UINT wglGetGPUIDsAMD(UINT maxCount, UINT * ids);
WGLBINDING_API INT wglGetGPUInfoAMD(UINT id, int property, GLenum dataType, UINT size, void * data);
WGLBINDING_API BOOL wglGetGammaTableI3D(HDC hDC, int iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue);
WGLBINDING_API BOOL wglGetGammaTableParametersI3D(HDC hDC, int iAttribute, int * piValue);
WGLBINDING_API BOOL wglGetGenlockSampleRateI3D(HDC hDC, UINT * uRate);
WGLBINDING_API BOOL wglGetGenlockSourceDelayI3D(HDC hDC, UINT * uDelay);
WGLBINDING_API BOOL wglGetGenlockSourceEdgeI3D(HDC hDC, UINT * uEdge);
WGLBINDING_API BOOL wglGetGenlockSourceI3D(HDC hDC, UINT * uSource);
WGLBINDING_API int wglGetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
WGLBINDING_API BOOL wglGetMscRateOML(HDC hdc, INT32 * numerator, INT32 * denominator);
WGLBINDING_API HDC wglGetPbufferDCARB(HPBUFFERARB hPbuffer);
WGLBINDING_API HDC wglGetPbufferDCEXT(HPBUFFEREXT hPbuffer);
WGLBINDING_API BOOL wglGetPixelFormatAttribfvARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues);
WGLBINDING_API BOOL wglGetPixelFormatAttribfvEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues);
WGLBINDING_API BOOL wglGetPixelFormatAttribivARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues);
WGLBINDING_API BOOL wglGetPixelFormatAttribivEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues);
WGLBINDING_API PROC wglGetProcAddress(LPCSTR lpszProc);
WGLBINDING_API int wglGetSwapIntervalEXT();
WGLBINDING_API BOOL wglGetSyncValuesOML(HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc);
WGLBINDING_API BOOL wglGetVideoDeviceNV(HDC hDC, int numDevices, HPVIDEODEV * hVideoDevice);
WGLBINDING_API BOOL wglGetVideoInfoNV(HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);


WGLBINDING_API BOOL wglIsEnabledFrameLockI3D(BOOL * pFlag);
WGLBINDING_API BOOL wglIsEnabledGenlockI3D(HDC hDC, BOOL * pFlag);

WGLBINDING_API BOOL wglJoinSwapGroupNV(HDC hDC, GLuint group);


WGLBINDING_API GLboolean wglLoadDisplayColorTableEXT(const GLushort * table, GLuint length);
WGLBINDING_API BOOL wglLockVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice);

WGLBINDING_API BOOL wglMakeAssociatedContextCurrentAMD(HGLRC hglrc);
WGLBINDING_API BOOL wglMakeContextCurrentARB(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
WGLBINDING_API BOOL wglMakeContextCurrentEXT(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
WGLBINDING_API BOOL wglMakeCurrent(HDC hDc, HGLRC newContext);




WGLBINDING_API BOOL wglQueryCurrentContextNV(int iAttribute, int * piValue);
WGLBINDING_API BOOL wglQueryFrameCountNV(HDC hDC, GLuint * count);
WGLBINDING_API BOOL wglQueryFrameLockMasterI3D(BOOL * pFlag);
WGLBINDING_API BOOL wglQueryFrameTrackingI3D(DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage);
WGLBINDING_API BOOL wglQueryGenlockMaxSourceDelayI3D(HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay);
WGLBINDING_API BOOL wglQueryMaxSwapGroupsNV(HDC hDC, GLuint * maxGroups, GLuint * maxBarriers);
WGLBINDING_API BOOL wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int * piValue);
WGLBINDING_API BOOL wglQueryPbufferEXT(HPBUFFEREXT hPbuffer, int iAttribute, int * piValue);
WGLBINDING_API BOOL wglQuerySwapGroupNV(HDC hDC, GLuint * group, GLuint * barrier);
WGLBINDING_API BOOL wglQueryVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int * piValue);

WGLBINDING_API BOOL wglRealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize);
WGLBINDING_API BOOL wglReleaseImageBufferEventsI3D(HDC hDC, const LPVOID * pAddress, UINT count);
WGLBINDING_API int wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC);
WGLBINDING_API int wglReleasePbufferDCEXT(HPBUFFEREXT hPbuffer, HDC hDC);
WGLBINDING_API BOOL wglReleaseTexImageARB(HPBUFFERARB hPbuffer, int iBuffer);
WGLBINDING_API BOOL wglReleaseVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
WGLBINDING_API BOOL wglReleaseVideoDeviceNV(HPVIDEODEV hVideoDevice);
WGLBINDING_API BOOL wglReleaseVideoImageNV(HPBUFFERARB hPbuffer, int iVideoBuffer);
WGLBINDING_API BOOL wglResetFrameCountNV(HDC hDC);
WGLBINDING_API BOOL wglRestoreBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);

WGLBINDING_API BOOL wglSaveBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height);
WGLBINDING_API BOOL wglSendPbufferToVideoNV(HPBUFFERARB hPbuffer, int iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock);
WGLBINDING_API BOOL wglSetDigitalVideoParametersI3D(HDC hDC, int iAttribute, const int * piValue);
WGLBINDING_API BOOL wglSetGammaTableI3D(HDC hDC, int iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue);
WGLBINDING_API BOOL wglSetGammaTableParametersI3D(HDC hDC, int iAttribute, const int * piValue);
WGLBINDING_API int wglSetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
WGLBINDING_API BOOL wglSetPbufferAttribARB(HPBUFFERARB hPbuffer, const int * piAttribList);
WGLBINDING_API BOOL wglSetStereoEmitterState3DL(HDC hDC, UINT uState);
WGLBINDING_API BOOL wglShareLists(HGLRC hrcSrvShare, HGLRC hrcSrvSource);
WGLBINDING_API INT64 wglSwapBuffersMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
WGLBINDING_API BOOL wglSwapIntervalEXT(int interval);
WGLBINDING_API BOOL wglSwapLayerBuffers(HDC hdc, UINT fuFlags);
WGLBINDING_API INT64 wglSwapLayerBuffersMscOML(HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);


WGLBINDING_API BOOL wglUseFontBitmaps(HDC hDC, DWORD first, DWORD count, DWORD listBase);
WGLBINDING_API BOOL wglUseFontBitmapsA(HDC hDC, DWORD first, DWORD count, DWORD listBase);
WGLBINDING_API BOOL wglUseFontBitmapsW(HDC hDC, DWORD first, DWORD count, DWORD listBase);
WGLBINDING_API BOOL wglUseFontOutlines(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
WGLBINDING_API BOOL wglUseFontOutlinesA(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
WGLBINDING_API BOOL wglUseFontOutlinesW(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);


WGLBINDING_API BOOL wglWaitForMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc);
WGLBINDING_API BOOL wglWaitForSbcOML(HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc);






} // namespace wgl


// Include function patches due to dinstinguished types GLint, GLuint, GLenum, and GLboolean
#include <wglbinding/wgl/functions-patches.h>
