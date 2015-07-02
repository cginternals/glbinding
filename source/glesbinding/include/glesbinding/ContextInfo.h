#pragma once

#include <glesbinding/glesbinding_api.h>

#include <set>
#include <string>

namespace gles
{
    enum class GLextension;
}


namespace glesbinding
{

class Version;


class GLESBINDING_API ContextInfo
{
public:
    ContextInfo() = delete;

    static std::set<gles::GLextension> extensions(std::set<std::string> * unknown = nullptr);

    static std::string renderer();
    static std::string vendor();

    static Version version();
};

} // namespace glesbinding
