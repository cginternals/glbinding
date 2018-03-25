
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR, int *, EGLint *, EGLint *> Binding::eglExportDMABUFImageMESA("eglExportDMABUFImageMESA");
Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR, int *, int *, EGLuint64KHR *> Binding::eglExportDMABUFImageQueryMESA("eglExportDMABUFImageQueryMESA");
Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR, EGLint *, EGLint *, EGLint *> Binding::eglExportDRMImageMESA("eglExportDRMImageMESA");



} // namespace eglbinding
