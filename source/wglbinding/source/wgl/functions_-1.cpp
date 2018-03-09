
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


int ChoosePixelFormat(HDC hDc, const PIXELFORMATDESCRIPTOR * pPfd)
{
    return Binding::ChoosePixelFormat(hDc, pPfd);
}

int DescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR * ppfd)
{
    return Binding::DescribePixelFormat(hdc, ipfd, cjpfd, ppfd);
}

UINT GetEnhMetaFilePixelFormat(HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR * ppfd)
{
    return Binding::GetEnhMetaFilePixelFormat(hemf, ppfd);
}

int GetPixelFormat(HDC hdc)
{
    return Binding::GetPixelFormat(hdc);
}

BOOL SetPixelFormat(HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR * ppfd)
{
    return Binding::SetPixelFormat(hdc, ipfd, ppfd);
}

BOOL SwapBuffers(HDC hdc)
{
    return Binding::SwapBuffers(hdc);
}




} // namespace wgl
