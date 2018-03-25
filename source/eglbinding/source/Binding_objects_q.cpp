
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLenum> Binding::eglQueryAPI("eglQueryAPI");
Function<Binding, EGLBoolean, EGLDisplay, EGLContext, EGLint, EGLint *> Binding::eglQueryContext("eglQueryContext");
Function<Binding, EGLBoolean, EGLint, EGLAttrib *> Binding::eglQueryDebugKHR("eglQueryDebugKHR");
Function<Binding, EGLBoolean, EGLDeviceEXT, EGLint, EGLAttrib *> Binding::eglQueryDeviceAttribEXT("eglQueryDeviceAttribEXT");
Function<Binding, const char *, EGLDeviceEXT, EGLint> Binding::eglQueryDeviceStringEXT("eglQueryDeviceStringEXT");
Function<Binding, EGLBoolean, EGLint, EGLDeviceEXT *, EGLint *> Binding::eglQueryDevicesEXT("eglQueryDevicesEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::eglQueryDisplayAttribEXT("eglQueryDisplayAttribEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::eglQueryDisplayAttribKHR("eglQueryDisplayAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::eglQueryDisplayAttribNV("eglQueryDisplayAttribNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLint *, EGLint *> Binding::eglQueryDmaBufFormatsEXT("eglQueryDmaBufFormatsEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLint, EGLuint64KHR *, EGLBoolean *, EGLint *> Binding::eglQueryDmaBufModifiersEXT("eglQueryDmaBufModifiersEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLNativeDisplayType *> Binding::eglQueryNativeDisplayNV("eglQueryNativeDisplayNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType *> Binding::eglQueryNativePixmapNV("eglQueryNativePixmapNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLNativeWindowType *> Binding::eglQueryNativeWindowNV("eglQueryNativeWindowNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib *> Binding::eglQueryOutputLayerAttribEXT("eglQueryOutputLayerAttribEXT");
Function<Binding, const char *, EGLDisplay, EGLOutputLayerEXT, EGLint> Binding::eglQueryOutputLayerStringEXT("eglQueryOutputLayerStringEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib *> Binding::eglQueryOutputPortAttribEXT("eglQueryOutputPortAttribEXT");
Function<Binding, const char *, EGLDisplay, EGLOutputPortEXT, EGLint> Binding::eglQueryOutputPortStringEXT("eglQueryOutputPortStringEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib *> Binding::eglQueryStreamAttribKHR("eglQueryStreamAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint *> Binding::eglQueryStreamKHR("eglQueryStreamKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint, EGLint, EGLint, void *> Binding::eglQueryStreamMetadataNV("eglQueryStreamMetadataNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR *> Binding::eglQueryStreamTimeKHR("eglQueryStreamTimeKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR *> Binding::eglQueryStreamu64KHR("eglQueryStreamu64KHR");
Function<Binding, const char *, EGLDisplay, EGLint> Binding::eglQueryString("eglQueryString");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint *> Binding::eglQuerySurface("eglQuerySurface");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLAttribKHR *> Binding::eglQuerySurface64KHR("eglQuerySurface64KHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, void **> Binding::eglQuerySurfacePointerANGLE("eglQuerySurfacePointerANGLE");



} // namespace eglbinding
