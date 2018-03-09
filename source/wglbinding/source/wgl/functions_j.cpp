
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglJoinSwapGroupNV(HDC hDC, GLuint group)
{
    return Binding::wglJoinSwapGroupNV(hDC, group);
}




} // namespace wgl
