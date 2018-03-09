
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLImageKHR, int *, EGLint *, EGLint *> Binding::eglExportDMABUFImageMESA("eglExportDMABUFImageMESA");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, int *, int *, EGLuint64KHR *> Binding::eglExportDMABUFImageQueryMESA("eglExportDMABUFImageQueryMESA");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, EGLint *, EGLint *, EGLint *> Binding::eglExportDRMImageMESA("eglExportDRMImageMESA");



} // namespace eglbinding
