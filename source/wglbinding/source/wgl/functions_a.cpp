
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


void * wglAllocateMemoryNV(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority)
{
    return Binding::wglAllocateMemoryNV(size, readfreq, writefreq, priority);
}

BOOL wglAssociateImageBufferEventsI3D(HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count)
{
    return Binding::wglAssociateImageBufferEventsI3D(hDC, pEvent, pAddress, pSize, count);
}




} // namespace wgl
