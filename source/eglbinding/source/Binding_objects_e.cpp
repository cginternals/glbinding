
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR, int *, EGLint *, EGLint *> Binding::ExportDMABUFImageMESA("eglExportDMABUFImageMESA");
Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR, int *, int *, EGLuint64KHR *> Binding::ExportDMABUFImageQueryMESA("eglExportDMABUFImageQueryMESA");
Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR, EGLint *, EGLint *, EGLint *> Binding::ExportDRMImageMESA("eglExportDRMImageMESA");



} // namespace eglbinding
