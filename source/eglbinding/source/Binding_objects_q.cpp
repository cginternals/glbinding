
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLenum> Binding::QueryAPI("eglQueryAPI");
Function<EGLBoolean, EGLDisplay, EGLContext, EGLint, EGLint *> Binding::QueryContext("eglQueryContext");
Function<EGLBoolean, EGLint, EGLAttrib *> Binding::QueryDebugKHR("eglQueryDebugKHR");
Function<EGLBoolean, EGLDeviceEXT, EGLint, EGLAttrib *> Binding::QueryDeviceAttribEXT("eglQueryDeviceAttribEXT");
Function<const char *, EGLDeviceEXT, EGLint> Binding::QueryDeviceStringEXT("eglQueryDeviceStringEXT");
Function<EGLBoolean, EGLint, EGLDeviceEXT *, EGLint *> Binding::QueryDevicesEXT("eglQueryDevicesEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribEXT("eglQueryDisplayAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribKHR("eglQueryDisplayAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribNV("eglQueryDisplayAttribNV");
Function<EGLBoolean, EGLDisplay, EGLint, EGLint *, EGLint *> Binding::QueryDmaBufFormatsEXT("eglQueryDmaBufFormatsEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLint, EGLuint64KHR *, EGLBoolean *, EGLint *> Binding::QueryDmaBufModifiersEXT("eglQueryDmaBufModifiersEXT");
Function<EGLBoolean, EGLDisplay, EGLNativeDisplayType *> Binding::QueryNativeDisplayNV("eglQueryNativeDisplayNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType *> Binding::QueryNativePixmapNV("eglQueryNativePixmapNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativeWindowType *> Binding::QueryNativeWindowNV("eglQueryNativeWindowNV");
Function<EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib *> Binding::QueryOutputLayerAttribEXT("eglQueryOutputLayerAttribEXT");
Function<const char *, EGLDisplay, EGLOutputLayerEXT, EGLint> Binding::QueryOutputLayerStringEXT("eglQueryOutputLayerStringEXT");
Function<EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib *> Binding::QueryOutputPortAttribEXT("eglQueryOutputPortAttribEXT");
Function<const char *, EGLDisplay, EGLOutputPortEXT, EGLint> Binding::QueryOutputPortStringEXT("eglQueryOutputPortStringEXT");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib *> Binding::QueryStreamAttribKHR("eglQueryStreamAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint *> Binding::QueryStreamKHR("eglQueryStreamKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint, EGLint, EGLint, void *> Binding::QueryStreamMetadataNV("eglQueryStreamMetadataNV");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR *> Binding::QueryStreamTimeKHR("eglQueryStreamTimeKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR *> Binding::QueryStreamu64KHR("eglQueryStreamu64KHR");
Function<const char *, EGLDisplay, EGLint> Binding::QueryString("eglQueryString");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint *> Binding::QuerySurface("eglQuerySurface");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLAttribKHR *> Binding::QuerySurface64KHR("eglQuerySurface64KHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, void **> Binding::QuerySurfacePointerANGLE("eglQuerySurfacePointerANGLE");



} // namespace eglbinding
