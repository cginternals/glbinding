
#include "../Binding_pch.h"

#include <wglbinding/wgl/functions.h>


using namespace wglbinding;


namespace wgl
{


BOOL wglChoosePixelFormatARB(HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats)
{
    return Binding::wglChoosePixelFormatARB(hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
}

BOOL wglChoosePixelFormatEXT(HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats)
{
    return Binding::wglChoosePixelFormatEXT(hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
}

BOOL wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask)
{
    return Binding::wglCopyContext(hglrcSrc, hglrcDst, mask);
}

BOOL wglCopyImageSubDataNV(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return Binding::wglCopyImageSubDataNV(hSrcRC, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, hDstRC, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

HDC wglCreateAffinityDCNV(const HGPUNV * phGpuList)
{
    return Binding::wglCreateAffinityDCNV(phGpuList);
}

HGLRC wglCreateAssociatedContextAMD(UINT id)
{
    return Binding::wglCreateAssociatedContextAMD(id);
}

HGLRC wglCreateAssociatedContextAttribsAMD(UINT id, HGLRC hShareContext, const int * attribList)
{
    return Binding::wglCreateAssociatedContextAttribsAMD(id, hShareContext, attribList);
}

HANDLE wglCreateBufferRegionARB(HDC hDC, int iLayerPlane, UINT uType)
{
    return Binding::wglCreateBufferRegionARB(hDC, iLayerPlane, uType);
}

HGLRC wglCreateContext(HDC hDc)
{
    return Binding::wglCreateContext(hDc);
}

HGLRC wglCreateContextAttribsARB(HDC hDC, HGLRC hShareContext, const int * attribList)
{
    return Binding::wglCreateContextAttribsARB(hDC, hShareContext, attribList);
}

GLboolean wglCreateDisplayColorTableEXT(GLushort id)
{
    return Binding::wglCreateDisplayColorTableEXT(id);
}

LPVOID wglCreateImageBufferI3D(HDC hDC, DWORD dwSize, UINT uFlags)
{
    return Binding::wglCreateImageBufferI3D(hDC, dwSize, uFlags);
}

HGLRC wglCreateLayerContext(HDC hDc, int level)
{
    return Binding::wglCreateLayerContext(hDc, level);
}

HPBUFFERARB wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList)
{
    return Binding::wglCreatePbufferARB(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
}

HPBUFFEREXT wglCreatePbufferEXT(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList)
{
    return Binding::wglCreatePbufferEXT(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
}




} // namespace wgl
