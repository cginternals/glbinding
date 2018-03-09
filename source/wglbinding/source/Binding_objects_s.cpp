
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HANDLE, int, int, int, int> Binding::wglSaveBufferRegionARB("wglSaveBufferRegionARB");
Function<BOOL, HPBUFFERARB, int, unsigned long *, BOOL> Binding::wglSendPbufferToVideoNV("wglSendPbufferToVideoNV");
Function<BOOL, HDC, int, const int *> Binding::wglSetDigitalVideoParametersI3D("wglSetDigitalVideoParametersI3D");
Function<BOOL, HDC, int, const USHORT *, const USHORT *, const USHORT *> Binding::wglSetGammaTableI3D("wglSetGammaTableI3D");
Function<BOOL, HDC, int, const int *> Binding::wglSetGammaTableParametersI3D("wglSetGammaTableParametersI3D");
Function<int, HDC, int, int, int, const COLORREF *> Binding::wglSetLayerPaletteEntries("wglSetLayerPaletteEntries");
Function<BOOL, HPBUFFERARB, const int *> Binding::wglSetPbufferAttribARB("wglSetPbufferAttribARB");
Function<BOOL, HDC, UINT> Binding::wglSetStereoEmitterState3DL("wglSetStereoEmitterState3DL");
Function<BOOL, HGLRC, HGLRC> Binding::wglShareLists("wglShareLists");
Function<INT64, HDC, INT64, INT64, INT64> Binding::wglSwapBuffersMscOML("wglSwapBuffersMscOML");
Function<BOOL, int> Binding::wglSwapIntervalEXT("wglSwapIntervalEXT");
Function<BOOL, HDC, UINT> Binding::wglSwapLayerBuffers("wglSwapLayerBuffers");
Function<INT64, HDC, int, INT64, INT64, INT64> Binding::wglSwapLayerBuffersMscOML("wglSwapLayerBuffersMscOML");



} // namespace wglbinding
