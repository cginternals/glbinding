
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLenum> Binding::QueryAPI("eglQueryAPI");
Function<Binding, EGLBoolean, EGLDisplay, EGLContext, EGLint, EGLint *> Binding::QueryContext("eglQueryContext");
Function<Binding, EGLBoolean, EGLint, EGLAttrib *> Binding::QueryDebugKHR("eglQueryDebugKHR");
Function<Binding, EGLBoolean, EGLDeviceEXT, EGLint, EGLAttrib *> Binding::QueryDeviceAttribEXT("eglQueryDeviceAttribEXT");
Function<Binding, const char *, EGLDeviceEXT, EGLint> Binding::QueryDeviceStringEXT("eglQueryDeviceStringEXT");
Function<Binding, EGLBoolean, EGLint, EGLDeviceEXT *, EGLint *> Binding::QueryDevicesEXT("eglQueryDevicesEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribEXT("eglQueryDisplayAttribEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribKHR("eglQueryDisplayAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribNV("eglQueryDisplayAttribNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLint *, EGLint *> Binding::QueryDmaBufFormatsEXT("eglQueryDmaBufFormatsEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLint, EGLint, EGLuint64KHR *, EGLBoolean *, EGLint *> Binding::QueryDmaBufModifiersEXT("eglQueryDmaBufModifiersEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLNativeDisplayType *> Binding::QueryNativeDisplayNV("eglQueryNativeDisplayNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType *> Binding::QueryNativePixmapNV("eglQueryNativePixmapNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLNativeWindowType *> Binding::QueryNativeWindowNV("eglQueryNativeWindowNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib *> Binding::QueryOutputLayerAttribEXT("eglQueryOutputLayerAttribEXT");
Function<Binding, const char *, EGLDisplay, EGLOutputLayerEXT, EGLint> Binding::QueryOutputLayerStringEXT("eglQueryOutputLayerStringEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib *> Binding::QueryOutputPortAttribEXT("eglQueryOutputPortAttribEXT");
Function<Binding, const char *, EGLDisplay, EGLOutputPortEXT, EGLint> Binding::QueryOutputPortStringEXT("eglQueryOutputPortStringEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib *> Binding::QueryStreamAttribKHR("eglQueryStreamAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint *> Binding::QueryStreamKHR("eglQueryStreamKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint, EGLint, EGLint, void *> Binding::QueryStreamMetadataNV("eglQueryStreamMetadataNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR *> Binding::QueryStreamTimeKHR("eglQueryStreamTimeKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR *> Binding::QueryStreamu64KHR("eglQueryStreamu64KHR");
Function<Binding, const char *, EGLDisplay, EGLint> Binding::QueryString("eglQueryString");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint *> Binding::QuerySurface("eglQuerySurface");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLAttribKHR *> Binding::QuerySurface64KHR("eglQuerySurface64KHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, void **> Binding::QuerySurfacePointerANGLE("eglQuerySurfacePointerANGLE");



} // namespace eglbinding
