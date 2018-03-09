
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLenum> Binding::eglQueryAPI("eglQueryAPI");
Function<EGLBoolean, EGLDisplay, EGLContext, EGLint, EGLint *> Binding::eglQueryContext("eglQueryContext");
Function<EGLBoolean, EGLint, EGLAttrib *> Binding::eglQueryDebugKHR("eglQueryDebugKHR");
Function<EGLBoolean, EGLDeviceEXT, EGLint, EGLAttrib *> Binding::eglQueryDeviceAttribEXT("eglQueryDeviceAttribEXT");
Function<const char *, EGLDeviceEXT, EGLint> Binding::eglQueryDeviceStringEXT("eglQueryDeviceStringEXT");
Function<EGLBoolean, EGLint, EGLDeviceEXT *, EGLint *> Binding::eglQueryDevicesEXT("eglQueryDevicesEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::eglQueryDisplayAttribEXT("eglQueryDisplayAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::eglQueryDisplayAttribKHR("eglQueryDisplayAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::eglQueryDisplayAttribNV("eglQueryDisplayAttribNV");
Function<EGLBoolean, EGLDisplay, EGLint, EGLint *, EGLint *> Binding::eglQueryDmaBufFormatsEXT("eglQueryDmaBufFormatsEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLint, EGLuint64KHR *, EGLBoolean *, EGLint *> Binding::eglQueryDmaBufModifiersEXT("eglQueryDmaBufModifiersEXT");
Function<EGLBoolean, EGLDisplay, EGLNativeDisplayType *> Binding::eglQueryNativeDisplayNV("eglQueryNativeDisplayNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType *> Binding::eglQueryNativePixmapNV("eglQueryNativePixmapNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativeWindowType *> Binding::eglQueryNativeWindowNV("eglQueryNativeWindowNV");
Function<EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib *> Binding::eglQueryOutputLayerAttribEXT("eglQueryOutputLayerAttribEXT");
Function<const char *, EGLDisplay, EGLOutputLayerEXT, EGLint> Binding::eglQueryOutputLayerStringEXT("eglQueryOutputLayerStringEXT");
Function<EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib *> Binding::eglQueryOutputPortAttribEXT("eglQueryOutputPortAttribEXT");
Function<const char *, EGLDisplay, EGLOutputPortEXT, EGLint> Binding::eglQueryOutputPortStringEXT("eglQueryOutputPortStringEXT");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib *> Binding::eglQueryStreamAttribKHR("eglQueryStreamAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint *> Binding::eglQueryStreamKHR("eglQueryStreamKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint, EGLint, EGLint, void *> Binding::eglQueryStreamMetadataNV("eglQueryStreamMetadataNV");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR *> Binding::eglQueryStreamTimeKHR("eglQueryStreamTimeKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR *> Binding::eglQueryStreamu64KHR("eglQueryStreamu64KHR");
Function<const char *, EGLDisplay, EGLint> Binding::eglQueryString("eglQueryString");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint *> Binding::eglQuerySurface("eglQuerySurface");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLAttribKHR *> Binding::eglQuerySurface64KHR("eglQuerySurface64KHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, void **> Binding::eglQuerySurfacePointerANGLE("eglQuerySurfacePointerANGLE");



} // namespace eglbinding
