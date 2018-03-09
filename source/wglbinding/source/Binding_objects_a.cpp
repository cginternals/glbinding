
#include "Binding_pch.h"


using namespace wgl;


namespace wglbinding
{


Function<void *, GLsizei, GLfloat, GLfloat, GLfloat> Binding::wglAllocateMemoryNV("wglAllocateMemoryNV");
Function<BOOL, HDC, const HANDLE *, const LPVOID *, const DWORD *, UINT> Binding::wglAssociateImageBufferEventsI3D("wglAssociateImageBufferEventsI3D");



} // namespace wglbinding
