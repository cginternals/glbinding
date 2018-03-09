
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<BOOL, HDC, DWORD, DWORD, DWORD> Binding::wglUseFontBitmaps("wglUseFontBitmaps");
Function<BOOL, HDC, DWORD, DWORD, DWORD> Binding::wglUseFontBitmapsA("wglUseFontBitmapsA");
Function<BOOL, HDC, DWORD, DWORD, DWORD> Binding::wglUseFontBitmapsW("wglUseFontBitmapsW");
Function<BOOL, HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT> Binding::wglUseFontOutlines("wglUseFontOutlines");
Function<BOOL, HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT> Binding::wglUseFontOutlinesA("wglUseFontOutlinesA");
Function<BOOL, HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT> Binding::wglUseFontOutlinesW("wglUseFontOutlinesW");



} // namespace wglbinding
