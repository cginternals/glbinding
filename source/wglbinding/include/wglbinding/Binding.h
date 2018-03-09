
#pragma once


#include <array>
#include <vector>
#include <functional>

#include <wglbinding/wglbinding_api.h>
#include <wglbinding/wglbinding_features.h>

#include <wglbinding/ContextHandle.h>
#include <wglbinding/Function.h>

#include <wglbinding/wgl/types.h>


namespace wglbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class WGLBINDING_API Binding
{
public:
    using array_t               = std::array<AbstractFunction *, 145>; ///< The type of the build-in functions collection
    using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback

    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    * 
    *  @remarks
    *    After this call, the initialized context is already set active for the current thread
    */
    static void initialize(bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] context
    *    The context handle of the context to initialize
    *  @param[in] useContext
    *    Whether to set the context active (useContext = true) after the initialization
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    */
    static void initialize(ContextHandle context, bool useContext = true, bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Registers an additional function for the additional features
    * 
    *  @param[in] function
    *    The function to register
    * 
    *  @remarks
    *    The additional features are callbacks, and use in multi-context environments
    */
    static void registerAdditionalFunction(AbstractFunction * function);

    /**
    *  @brief
    *    Resolves the funtion pointers of all registered OpenGL functions immediately for the current context
    */
    static void resolveFunctions();
    
    /**
    *  @brief
    *    Update the current context state in wglbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void useCurrentContext();
    
    /**
    *  @brief
    *    Update the current context state in wglbinding
    * 
    *  @param[in] context
    *    The context handle of the context to set current
    */
    static void useContext(ContextHandle context);

    /**
    *  @brief
    *    Removes the current context from the state of wglbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void releaseCurrentContext();
    
    /**
    *  @brief
    *    Removes the current context from the state of wglbinding
    * 
    *  @param[in] context
    *    The context handle of the context to remove
    */
    static void releaseContext(ContextHandle context);
    
    /**
    *  @brief
    *    Registers an additional callback that gets called each time the context is switched using the useContext method
    * 
    *  @remarks
    *    There may be multiple context switch callbacks registered at once
    */
    static void addContextSwitchCallback(ContextSwitchCallback callback);

    /**
    *  @brief
    *    The accessor for the number of all registered functions (build-in and additional)
    * 
    *  @return
    *    The number of all registered functions
    */
    static size_t size();

    /**
    *  @brief
    *    The accessor for all build-in functions
    * 
    *  @return
    *    The list of all build-in functions
    */
    static const array_t & functions();
    
    /**
    *  @brief
    *    The accessor for all additional functions
    * 
    *  @return
    *    The list of all additional functions
    */
    static const std::vector<AbstractFunction *> & additionalFunctions();


public:
    static Function<wgl::int, wgl::HDC, const wgl::PIXELFORMATDESCRIPTOR *> ChoosePixelFormat; ///< Wrapper for ChoosePixelFormat
    static Function<wgl::int, wgl::HDC, wgl::int, wgl::UINT, const wgl::PIXELFORMATDESCRIPTOR *> DescribePixelFormat; ///< Wrapper for DescribePixelFormat
    static Function<wgl::UINT, wgl::HENHMETAFILE, const wgl::PIXELFORMATDESCRIPTOR *> GetEnhMetaFilePixelFormat; ///< Wrapper for GetEnhMetaFilePixelFormat
    static Function<wgl::int, wgl::HDC> GetPixelFormat; ///< Wrapper for GetPixelFormat
    static Function<wgl::BOOL, wgl::HDC, wgl::int, const wgl::PIXELFORMATDESCRIPTOR *> SetPixelFormat; ///< Wrapper for SetPixelFormat
    static Function<wgl::BOOL, wgl::HDC> SwapBuffers; ///< Wrapper for SwapBuffers
    static Function<void *, wgl::GLsizei, wgl::GLfloat, wgl::GLfloat, wgl::GLfloat> wglAllocateMemoryNV; ///< Wrapper for wglAllocateMemoryNV
    static Function<wgl::BOOL, wgl::HDC, const wgl::HANDLE *, const wgl::LPVOID *, const wgl::DWORD *, wgl::UINT> wglAssociateImageBufferEventsI3D; ///< Wrapper for wglAssociateImageBufferEventsI3D
    static Function<wgl::BOOL> wglBeginFrameTrackingI3D; ///< Wrapper for wglBeginFrameTrackingI3D
    static Function<wgl::GLboolean, wgl::GLushort> wglBindDisplayColorTableEXT; ///< Wrapper for wglBindDisplayColorTableEXT
    static Function<wgl::BOOL, wgl::GLuint, wgl::GLuint> wglBindSwapBarrierNV; ///< Wrapper for wglBindSwapBarrierNV
    static Function<wgl::BOOL, wgl::HPBUFFERARB, wgl::int> wglBindTexImageARB; ///< Wrapper for wglBindTexImageARB
    static Function<wgl::BOOL, wgl::UINT, wgl::HVIDEOINPUTDEVICENV> wglBindVideoCaptureDeviceNV; ///< Wrapper for wglBindVideoCaptureDeviceNV
    static Function<wgl::BOOL, wgl::HDC, wgl::unsigned int, wgl::HVIDEOOUTPUTDEVICENV, const wgl::int *> wglBindVideoDeviceNV; ///< Wrapper for wglBindVideoDeviceNV
    static Function<wgl::BOOL, wgl::HPVIDEODEV, wgl::HPBUFFERARB, wgl::int> wglBindVideoImageNV; ///< Wrapper for wglBindVideoImageNV
    static Function<wgl::VOID, wgl::HGLRC, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLbitfield, wgl::GLenum> wglBlitContextFramebufferAMD; ///< Wrapper for wglBlitContextFramebufferAMD
    static Function<wgl::BOOL, wgl::HDC, const wgl::int *, const wgl::FLOAT *, wgl::UINT, wgl::int *, wgl::UINT *> wglChoosePixelFormatARB; ///< Wrapper for wglChoosePixelFormatARB
    static Function<wgl::BOOL, wgl::HDC, const wgl::int *, const wgl::FLOAT *, wgl::UINT, wgl::int *, wgl::UINT *> wglChoosePixelFormatEXT; ///< Wrapper for wglChoosePixelFormatEXT
    static Function<wgl::BOOL, wgl::HGLRC, wgl::HGLRC, wgl::UINT> wglCopyContext; ///< Wrapper for wglCopyContext
    static Function<wgl::BOOL, wgl::HGLRC, wgl::GLuint, wgl::GLenum, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::HGLRC, wgl::GLuint, wgl::GLenum, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLint, wgl::GLsizei, wgl::GLsizei, wgl::GLsizei> wglCopyImageSubDataNV; ///< Wrapper for wglCopyImageSubDataNV
    static Function<wgl::HDC, const wgl::HGPUNV *> wglCreateAffinityDCNV; ///< Wrapper for wglCreateAffinityDCNV
    static Function<wgl::HGLRC, wgl::UINT> wglCreateAssociatedContextAMD; ///< Wrapper for wglCreateAssociatedContextAMD
    static Function<wgl::HGLRC, wgl::UINT, wgl::HGLRC, const wgl::int *> wglCreateAssociatedContextAttribsAMD; ///< Wrapper for wglCreateAssociatedContextAttribsAMD
    static Function<wgl::HANDLE, wgl::HDC, wgl::int, wgl::UINT> wglCreateBufferRegionARB; ///< Wrapper for wglCreateBufferRegionARB
    static Function<wgl::HGLRC, wgl::HDC> wglCreateContext; ///< Wrapper for wglCreateContext
    static Function<wgl::HGLRC, wgl::HDC, wgl::HGLRC, const wgl::int *> wglCreateContextAttribsARB; ///< Wrapper for wglCreateContextAttribsARB
    static Function<wgl::GLboolean, wgl::GLushort> wglCreateDisplayColorTableEXT; ///< Wrapper for wglCreateDisplayColorTableEXT
    static Function<wgl::LPVOID, wgl::HDC, wgl::DWORD, wgl::UINT> wglCreateImageBufferI3D; ///< Wrapper for wglCreateImageBufferI3D
    static Function<wgl::HGLRC, wgl::HDC, wgl::int> wglCreateLayerContext; ///< Wrapper for wglCreateLayerContext
    static Function<wgl::HPBUFFERARB, wgl::HDC, wgl::int, wgl::int, wgl::int, const wgl::int *> wglCreatePbufferARB; ///< Wrapper for wglCreatePbufferARB
    static Function<wgl::HPBUFFEREXT, wgl::HDC, wgl::int, wgl::int, wgl::int, const wgl::int *> wglCreatePbufferEXT; ///< Wrapper for wglCreatePbufferEXT
    static Function<wgl::BOOL, wgl::HANDLE> wglDXCloseDeviceNV; ///< Wrapper for wglDXCloseDeviceNV
    static Function<wgl::BOOL, wgl::HANDLE, wgl::GLint, wgl::HANDLE *> wglDXLockObjectsNV; ///< Wrapper for wglDXLockObjectsNV
    static Function<wgl::BOOL, wgl::HANDLE, wgl::GLenum> wglDXObjectAccessNV; ///< Wrapper for wglDXObjectAccessNV
    static Function<wgl::HANDLE, void *> wglDXOpenDeviceNV; ///< Wrapper for wglDXOpenDeviceNV
    static Function<wgl::HANDLE, wgl::HANDLE, void *, wgl::GLuint, wgl::GLenum, wgl::GLenum> wglDXRegisterObjectNV; ///< Wrapper for wglDXRegisterObjectNV
    static Function<wgl::BOOL, void *, wgl::HANDLE> wglDXSetResourceShareHandleNV; ///< Wrapper for wglDXSetResourceShareHandleNV
    static Function<wgl::BOOL, wgl::HANDLE, wgl::GLint, wgl::HANDLE *> wglDXUnlockObjectsNV; ///< Wrapper for wglDXUnlockObjectsNV
    static Function<wgl::BOOL, wgl::HANDLE, wgl::HANDLE> wglDXUnregisterObjectNV; ///< Wrapper for wglDXUnregisterObjectNV
    static Function<wgl::BOOL, wgl::HDC, wgl::GLfloat> wglDelayBeforeSwapNV; ///< Wrapper for wglDelayBeforeSwapNV
    static Function<wgl::BOOL, wgl::HGLRC> wglDeleteAssociatedContextAMD; ///< Wrapper for wglDeleteAssociatedContextAMD
    static Function<wgl::VOID, wgl::HANDLE> wglDeleteBufferRegionARB; ///< Wrapper for wglDeleteBufferRegionARB
    static Function<wgl::BOOL, wgl::HGLRC> wglDeleteContext; ///< Wrapper for wglDeleteContext
    static Function<wgl::BOOL, wgl::HDC> wglDeleteDCNV; ///< Wrapper for wglDeleteDCNV
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int, wgl::UINT, const wgl::LAYERPLANEDESCRIPTOR *> wglDescribeLayerPlane; ///< Wrapper for wglDescribeLayerPlane
    static Function<wgl::VOID, wgl::GLushort> wglDestroyDisplayColorTableEXT; ///< Wrapper for wglDestroyDisplayColorTableEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::LPVOID> wglDestroyImageBufferI3D; ///< Wrapper for wglDestroyImageBufferI3D
    static Function<wgl::BOOL, wgl::HPBUFFERARB> wglDestroyPbufferARB; ///< Wrapper for wglDestroyPbufferARB
    static Function<wgl::BOOL, wgl::HPBUFFEREXT> wglDestroyPbufferEXT; ///< Wrapper for wglDestroyPbufferEXT
    static Function<wgl::BOOL> wglDisableFrameLockI3D; ///< Wrapper for wglDisableFrameLockI3D
    static Function<wgl::BOOL, wgl::HDC> wglDisableGenlockI3D; ///< Wrapper for wglDisableGenlockI3D
    static Function<wgl::BOOL> wglEnableFrameLockI3D; ///< Wrapper for wglEnableFrameLockI3D
    static Function<wgl::BOOL, wgl::HDC> wglEnableGenlockI3D; ///< Wrapper for wglEnableGenlockI3D
    static Function<wgl::BOOL> wglEndFrameTrackingI3D; ///< Wrapper for wglEndFrameTrackingI3D
    static Function<wgl::BOOL, wgl::HGPUNV, wgl::UINT, wgl::PGPU_DEVICE> wglEnumGpuDevicesNV; ///< Wrapper for wglEnumGpuDevicesNV
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT, wgl::HGPUNV *> wglEnumGpusFromAffinityDCNV; ///< Wrapper for wglEnumGpusFromAffinityDCNV
    static Function<wgl::BOOL, wgl::UINT, wgl::HGPUNV *> wglEnumGpusNV; ///< Wrapper for wglEnumGpusNV
    static Function<wgl::UINT, wgl::HDC, wgl::HVIDEOINPUTDEVICENV *> wglEnumerateVideoCaptureDevicesNV; ///< Wrapper for wglEnumerateVideoCaptureDevicesNV
    static Function<wgl::int, wgl::HDC, wgl::HVIDEOOUTPUTDEVICENV *> wglEnumerateVideoDevicesNV; ///< Wrapper for wglEnumerateVideoDevicesNV
    static Function<void, void *> wglFreeMemoryNV; ///< Wrapper for wglFreeMemoryNV
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT> wglGenlockSampleRateI3D; ///< Wrapper for wglGenlockSampleRateI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT> wglGenlockSourceDelayI3D; ///< Wrapper for wglGenlockSourceDelayI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT> wglGenlockSourceEdgeI3D; ///< Wrapper for wglGenlockSourceEdgeI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT> wglGenlockSourceI3D; ///< Wrapper for wglGenlockSourceI3D
    static Function<wgl::UINT, wgl::HGLRC> wglGetContextGPUIDAMD; ///< Wrapper for wglGetContextGPUIDAMD
    static Function<wgl::HGLRC> wglGetCurrentAssociatedContextAMD; ///< Wrapper for wglGetCurrentAssociatedContextAMD
    static Function<wgl::HGLRC> wglGetCurrentContext; ///< Wrapper for wglGetCurrentContext
    static Function<wgl::HDC> wglGetCurrentDC; ///< Wrapper for wglGetCurrentDC
    static Function<wgl::HDC> wglGetCurrentReadDCARB; ///< Wrapper for wglGetCurrentReadDCARB
    static Function<wgl::HDC> wglGetCurrentReadDCEXT; ///< Wrapper for wglGetCurrentReadDCEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int *> wglGetDigitalVideoParametersI3D; ///< Wrapper for wglGetDigitalVideoParametersI3D
    static Function<const wgl::char *, wgl::HDC> wglGetExtensionsStringARB; ///< Wrapper for wglGetExtensionsStringARB
    static Function<const wgl::char *> wglGetExtensionsStringEXT; ///< Wrapper for wglGetExtensionsStringEXT
    static Function<wgl::BOOL, wgl::float *> wglGetFrameUsageI3D; ///< Wrapper for wglGetFrameUsageI3D
    static Function<wgl::UINT, wgl::UINT, wgl::UINT *> wglGetGPUIDsAMD; ///< Wrapper for wglGetGPUIDsAMD
    static Function<wgl::INT, wgl::UINT, wgl::int, wgl::GLenum, wgl::UINT, void *> wglGetGPUInfoAMD; ///< Wrapper for wglGetGPUInfoAMD
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::USHORT *, wgl::USHORT *, wgl::USHORT *> wglGetGammaTableI3D; ///< Wrapper for wglGetGammaTableI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int *> wglGetGammaTableParametersI3D; ///< Wrapper for wglGetGammaTableParametersI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT *> wglGetGenlockSampleRateI3D; ///< Wrapper for wglGetGenlockSampleRateI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT *> wglGetGenlockSourceDelayI3D; ///< Wrapper for wglGetGenlockSourceDelayI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT *> wglGetGenlockSourceEdgeI3D; ///< Wrapper for wglGetGenlockSourceEdgeI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT *> wglGetGenlockSourceI3D; ///< Wrapper for wglGetGenlockSourceI3D
    static Function<wgl::int, wgl::HDC, wgl::int, wgl::int, wgl::int, const wgl::COLORREF *> wglGetLayerPaletteEntries; ///< Wrapper for wglGetLayerPaletteEntries
    static Function<wgl::BOOL, wgl::HDC, wgl::INT32 *, wgl::INT32 *> wglGetMscRateOML; ///< Wrapper for wglGetMscRateOML
    static Function<wgl::HDC, wgl::HPBUFFERARB> wglGetPbufferDCARB; ///< Wrapper for wglGetPbufferDCARB
    static Function<wgl::HDC, wgl::HPBUFFEREXT> wglGetPbufferDCEXT; ///< Wrapper for wglGetPbufferDCEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int, wgl::UINT, const wgl::int *, wgl::FLOAT *> wglGetPixelFormatAttribfvARB; ///< Wrapper for wglGetPixelFormatAttribfvARB
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int, wgl::UINT, wgl::int *, wgl::FLOAT *> wglGetPixelFormatAttribfvEXT; ///< Wrapper for wglGetPixelFormatAttribfvEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int, wgl::UINT, const wgl::int *, wgl::int *> wglGetPixelFormatAttribivARB; ///< Wrapper for wglGetPixelFormatAttribivARB
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::int, wgl::UINT, wgl::int *, wgl::int *> wglGetPixelFormatAttribivEXT; ///< Wrapper for wglGetPixelFormatAttribivEXT
    static Function<wgl::PROC, wgl::LPCSTR> wglGetProcAddress; ///< Wrapper for wglGetProcAddress
    static Function<wgl::int> wglGetSwapIntervalEXT; ///< Wrapper for wglGetSwapIntervalEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::INT64 *, wgl::INT64 *, wgl::INT64 *> wglGetSyncValuesOML; ///< Wrapper for wglGetSyncValuesOML
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::HPVIDEODEV *> wglGetVideoDeviceNV; ///< Wrapper for wglGetVideoDeviceNV
    static Function<wgl::BOOL, wgl::HPVIDEODEV, wgl::unsigned long *, wgl::unsigned long *> wglGetVideoInfoNV; ///< Wrapper for wglGetVideoInfoNV
    static Function<wgl::BOOL, wgl::BOOL *> wglIsEnabledFrameLockI3D; ///< Wrapper for wglIsEnabledFrameLockI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::BOOL *> wglIsEnabledGenlockI3D; ///< Wrapper for wglIsEnabledGenlockI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::GLuint> wglJoinSwapGroupNV; ///< Wrapper for wglJoinSwapGroupNV
    static Function<wgl::GLboolean, const wgl::GLushort *, wgl::GLuint> wglLoadDisplayColorTableEXT; ///< Wrapper for wglLoadDisplayColorTableEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::HVIDEOINPUTDEVICENV> wglLockVideoCaptureDeviceNV; ///< Wrapper for wglLockVideoCaptureDeviceNV
    static Function<wgl::BOOL, wgl::HGLRC> wglMakeAssociatedContextCurrentAMD; ///< Wrapper for wglMakeAssociatedContextCurrentAMD
    static Function<wgl::BOOL, wgl::HDC, wgl::HDC, wgl::HGLRC> wglMakeContextCurrentARB; ///< Wrapper for wglMakeContextCurrentARB
    static Function<wgl::BOOL, wgl::HDC, wgl::HDC, wgl::HGLRC> wglMakeContextCurrentEXT; ///< Wrapper for wglMakeContextCurrentEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::HGLRC> wglMakeCurrent; ///< Wrapper for wglMakeCurrent
    static Function<wgl::BOOL, wgl::int, wgl::int *> wglQueryCurrentContextNV; ///< Wrapper for wglQueryCurrentContextNV
    static Function<wgl::BOOL, wgl::HDC, wgl::GLuint *> wglQueryFrameCountNV; ///< Wrapper for wglQueryFrameCountNV
    static Function<wgl::BOOL, wgl::BOOL *> wglQueryFrameLockMasterI3D; ///< Wrapper for wglQueryFrameLockMasterI3D
    static Function<wgl::BOOL, wgl::DWORD *, wgl::DWORD *, wgl::float *> wglQueryFrameTrackingI3D; ///< Wrapper for wglQueryFrameTrackingI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT *, wgl::UINT *> wglQueryGenlockMaxSourceDelayI3D; ///< Wrapper for wglQueryGenlockMaxSourceDelayI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::GLuint *, wgl::GLuint *> wglQueryMaxSwapGroupsNV; ///< Wrapper for wglQueryMaxSwapGroupsNV
    static Function<wgl::BOOL, wgl::HPBUFFERARB, wgl::int, wgl::int *> wglQueryPbufferARB; ///< Wrapper for wglQueryPbufferARB
    static Function<wgl::BOOL, wgl::HPBUFFEREXT, wgl::int, wgl::int *> wglQueryPbufferEXT; ///< Wrapper for wglQueryPbufferEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::GLuint *, wgl::GLuint *> wglQuerySwapGroupNV; ///< Wrapper for wglQuerySwapGroupNV
    static Function<wgl::BOOL, wgl::HDC, wgl::HVIDEOINPUTDEVICENV, wgl::int, wgl::int *> wglQueryVideoCaptureDeviceNV; ///< Wrapper for wglQueryVideoCaptureDeviceNV
    static Function<wgl::BOOL, wgl::HDC, wgl::int, wgl::BOOL> wglRealizeLayerPalette; ///< Wrapper for wglRealizeLayerPalette
    static Function<wgl::BOOL, wgl::HDC, const wgl::LPVOID *, wgl::UINT> wglReleaseImageBufferEventsI3D; ///< Wrapper for wglReleaseImageBufferEventsI3D
    static Function<wgl::int, wgl::HPBUFFERARB, wgl::HDC> wglReleasePbufferDCARB; ///< Wrapper for wglReleasePbufferDCARB
    static Function<wgl::int, wgl::HPBUFFEREXT, wgl::HDC> wglReleasePbufferDCEXT; ///< Wrapper for wglReleasePbufferDCEXT
    static Function<wgl::BOOL, wgl::HPBUFFERARB, wgl::int> wglReleaseTexImageARB; ///< Wrapper for wglReleaseTexImageARB
    static Function<wgl::BOOL, wgl::HDC, wgl::HVIDEOINPUTDEVICENV> wglReleaseVideoCaptureDeviceNV; ///< Wrapper for wglReleaseVideoCaptureDeviceNV
    static Function<wgl::BOOL, wgl::HPVIDEODEV> wglReleaseVideoDeviceNV; ///< Wrapper for wglReleaseVideoDeviceNV
    static Function<wgl::BOOL, wgl::HPBUFFERARB, wgl::int> wglReleaseVideoImageNV; ///< Wrapper for wglReleaseVideoImageNV
    static Function<wgl::BOOL, wgl::HDC> wglResetFrameCountNV; ///< Wrapper for wglResetFrameCountNV
    static Function<wgl::BOOL, wgl::HANDLE, wgl::int, wgl::int, wgl::int, wgl::int, wgl::int, wgl::int> wglRestoreBufferRegionARB; ///< Wrapper for wglRestoreBufferRegionARB
    static Function<wgl::BOOL, wgl::HANDLE, wgl::int, wgl::int, wgl::int, wgl::int> wglSaveBufferRegionARB; ///< Wrapper for wglSaveBufferRegionARB
    static Function<wgl::BOOL, wgl::HPBUFFERARB, wgl::int, wgl::unsigned long *, wgl::BOOL> wglSendPbufferToVideoNV; ///< Wrapper for wglSendPbufferToVideoNV
    static Function<wgl::BOOL, wgl::HDC, wgl::int, const wgl::int *> wglSetDigitalVideoParametersI3D; ///< Wrapper for wglSetDigitalVideoParametersI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::int, const wgl::USHORT *, const wgl::USHORT *, const wgl::USHORT *> wglSetGammaTableI3D; ///< Wrapper for wglSetGammaTableI3D
    static Function<wgl::BOOL, wgl::HDC, wgl::int, const wgl::int *> wglSetGammaTableParametersI3D; ///< Wrapper for wglSetGammaTableParametersI3D
    static Function<wgl::int, wgl::HDC, wgl::int, wgl::int, wgl::int, const wgl::COLORREF *> wglSetLayerPaletteEntries; ///< Wrapper for wglSetLayerPaletteEntries
    static Function<wgl::BOOL, wgl::HPBUFFERARB, const wgl::int *> wglSetPbufferAttribARB; ///< Wrapper for wglSetPbufferAttribARB
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT> wglSetStereoEmitterState3DL; ///< Wrapper for wglSetStereoEmitterState3DL
    static Function<wgl::BOOL, wgl::HGLRC, wgl::HGLRC> wglShareLists; ///< Wrapper for wglShareLists
    static Function<wgl::INT64, wgl::HDC, wgl::INT64, wgl::INT64, wgl::INT64> wglSwapBuffersMscOML; ///< Wrapper for wglSwapBuffersMscOML
    static Function<wgl::BOOL, wgl::int> wglSwapIntervalEXT; ///< Wrapper for wglSwapIntervalEXT
    static Function<wgl::BOOL, wgl::HDC, wgl::UINT> wglSwapLayerBuffers; ///< Wrapper for wglSwapLayerBuffers
    static Function<wgl::INT64, wgl::HDC, wgl::int, wgl::INT64, wgl::INT64, wgl::INT64> wglSwapLayerBuffersMscOML; ///< Wrapper for wglSwapLayerBuffersMscOML
    static Function<wgl::BOOL, wgl::HDC, wgl::DWORD, wgl::DWORD, wgl::DWORD> wglUseFontBitmaps; ///< Wrapper for wglUseFontBitmaps
    static Function<wgl::BOOL, wgl::HDC, wgl::DWORD, wgl::DWORD, wgl::DWORD> wglUseFontBitmapsA; ///< Wrapper for wglUseFontBitmapsA
    static Function<wgl::BOOL, wgl::HDC, wgl::DWORD, wgl::DWORD, wgl::DWORD> wglUseFontBitmapsW; ///< Wrapper for wglUseFontBitmapsW
    static Function<wgl::BOOL, wgl::HDC, wgl::DWORD, wgl::DWORD, wgl::DWORD, wgl::FLOAT, wgl::FLOAT, wgl::int, wgl::LPGLYPHMETRICSFLOAT> wglUseFontOutlines; ///< Wrapper for wglUseFontOutlines
    static Function<wgl::BOOL, wgl::HDC, wgl::DWORD, wgl::DWORD, wgl::DWORD, wgl::FLOAT, wgl::FLOAT, wgl::int, wgl::LPGLYPHMETRICSFLOAT> wglUseFontOutlinesA; ///< Wrapper for wglUseFontOutlinesA
    static Function<wgl::BOOL, wgl::HDC, wgl::DWORD, wgl::DWORD, wgl::DWORD, wgl::FLOAT, wgl::FLOAT, wgl::int, wgl::LPGLYPHMETRICSFLOAT> wglUseFontOutlinesW; ///< Wrapper for wglUseFontOutlinesW
    static Function<wgl::BOOL, wgl::HDC, wgl::INT64, wgl::INT64, wgl::INT64, wgl::INT64 *, wgl::INT64 *, wgl::INT64 *> wglWaitForMscOML; ///< Wrapper for wglWaitForMscOML
    static Function<wgl::BOOL, wgl::HDC, wgl::INT64, wgl::INT64 *, wgl::INT64 *, wgl::INT64 *> wglWaitForSbcOML; ///< Wrapper for wglWaitForSbcOML


protected:
    static const array_t                      s_functions;           ///< The list of all build-in functions
    static std::vector<AbstractFunction *>    s_additionalFunctions; ///< The list of all additional functions
    static std::vector<ContextSwitchCallback> s_callbacks;           ///< The list of all currently registered context switch callbacks
};


} // namespace wglbinding
