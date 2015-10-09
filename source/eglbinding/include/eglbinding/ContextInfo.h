#pragma once

#include <eglbinding/eglbinding_api.h>

#include <set>
#include <string>

#include <eglbinding/egl/types.h>

namespace egl
{
    enum class EGLextension;
}


namespace eglbinding
{

class Version;


class EGLBINDING_API ContextInfo
{
public:
    ContextInfo() = delete;

    static std::set<egl::EGLextension> extensions(egl::EGLDisplay display, std::set<std::string> * unknown = nullptr);

    static std::string vendor(egl::EGLDisplay display);

    static Version version(egl::EGLDisplay display);
};

} // namespace eglbinding
