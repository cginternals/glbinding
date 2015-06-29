#pragma once

#include <eglbinding/eglbinding_api.h>

#include <set>
#include <string>

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

    static std::set<egl::EGLextension> extensions(std::set<std::string> * unknown = nullptr);

    static std::string vendor();

    static Version version();
};

} // namespace eglbinding
