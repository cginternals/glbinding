
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLImageKHR, int *, EGLint *, EGLint *> Binding::ExportDMABUFImageMESA("eglExportDMABUFImageMESA");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, int *, int *, EGLuint64KHR *> Binding::ExportDMABUFImageQueryMESA("eglExportDMABUFImageQueryMESA");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, EGLint *, EGLint *, EGLint *> Binding::ExportDRMImageMESA("eglExportDRMImageMESA");



} // namespace eglbinding
