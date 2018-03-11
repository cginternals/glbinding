
#pragma once


#include <wglbinding/nogl.h>
#include <wglbinding/wglbinding_api.h>
#include <wglbinding/wglbinding_features.h>
#include <wglbinding/wgl/boolean.h>

#include <cstddef>
#include <cstdint>
#include <array>
#include <KHR/khrplatform.h>

#include <functional>
#include <ostream>
#include <string>


#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif


namespace wgl
{


enum class GLextension : int;
struct _GPU_DEVICE {
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
};
using GPU_DEVICE = struct _GPU_DEVICE;
using PGPU_DEVICE = struct _GPU_DEVICE *;
using GLuint_array_2 = std::array<GLuint, 2>;

} // namespace wgl


// Type Integrations


namespace std
{


template<>
struct hash<wgl::GLextension>
{
    hash<std::underlying_type<wgl::GLextension>::type>::result_type operator()(const wgl::GLextension & t) const
    {
        return hash<std::underlying_type<wgl::GLextension>::type>()(static_cast<std::underlying_type<wgl::GLextension>::type>(t));
    }
};


} // namespace std


namespace wgl
{


WGLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace wgl


