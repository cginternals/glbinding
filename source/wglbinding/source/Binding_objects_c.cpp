
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HDC, const int *, const FLOAT *, UINT, int *, UINT *> Binding::wglChoosePixelFormatARB("wglChoosePixelFormatARB");
Function<BOOL, HDC, const int *, const FLOAT *, UINT, int *, UINT *> Binding::wglChoosePixelFormatEXT("wglChoosePixelFormatEXT");
Function<BOOL, HGLRC, HGLRC, UINT> Binding::wglCopyContext("wglCopyContext");
Function<BOOL, HGLRC, GLuint, GLenum, GLint, GLint, GLint, GLint, HGLRC, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::wglCopyImageSubDataNV("wglCopyImageSubDataNV");
Function<HDC, const HGPUNV *> Binding::wglCreateAffinityDCNV("wglCreateAffinityDCNV");
Function<HGLRC, UINT> Binding::wglCreateAssociatedContextAMD("wglCreateAssociatedContextAMD");
Function<HGLRC, UINT, HGLRC, const int *> Binding::wglCreateAssociatedContextAttribsAMD("wglCreateAssociatedContextAttribsAMD");
Function<HANDLE, HDC, int, UINT> Binding::wglCreateBufferRegionARB("wglCreateBufferRegionARB");
Function<HGLRC, HDC> Binding::wglCreateContext("wglCreateContext");
Function<HGLRC, HDC, HGLRC, const int *> Binding::wglCreateContextAttribsARB("wglCreateContextAttribsARB");
Function<GLboolean, GLushort> Binding::wglCreateDisplayColorTableEXT("wglCreateDisplayColorTableEXT");
Function<LPVOID, HDC, DWORD, UINT> Binding::wglCreateImageBufferI3D("wglCreateImageBufferI3D");
Function<HGLRC, HDC, int> Binding::wglCreateLayerContext("wglCreateLayerContext");
Function<HPBUFFERARB, HDC, int, int, int, const int *> Binding::wglCreatePbufferARB("wglCreatePbufferARB");
Function<HPBUFFEREXT, HDC, int, int, int, const int *> Binding::wglCreatePbufferEXT("wglCreatePbufferEXT");



} // namespace wglbinding
