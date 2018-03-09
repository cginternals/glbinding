
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<int, HDC, const PIXELFORMATDESCRIPTOR *> Binding::ChoosePixelFormat("ChoosePixelFormat");
Function<int, HDC, int, UINT, const PIXELFORMATDESCRIPTOR *> Binding::DescribePixelFormat("DescribePixelFormat");
Function<UINT, HENHMETAFILE, const PIXELFORMATDESCRIPTOR *> Binding::GetEnhMetaFilePixelFormat("GetEnhMetaFilePixelFormat");
Function<int, HDC> Binding::GetPixelFormat("GetPixelFormat");
Function<BOOL, HDC, int, const PIXELFORMATDESCRIPTOR *> Binding::SetPixelFormat("SetPixelFormat");
Function<BOOL, HDC> Binding::SwapBuffers("SwapBuffers");



} // namespace wglbinding
