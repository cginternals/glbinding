#pragma once

#include <glpbinding/glpbinding_api.h>

#include <set>
#include <string>

namespace glp
{
    enum class GLextension;
}


namespace glpbinding
{

class Version;


class GLPBINDING_API ContextInfo
{
public:
    ContextInfo() = delete;

    static std::set<glp::GLextension> extensions(std::set<std::string> * unknown = nullptr);

    static std::string renderer();
    static std::string vendor();

    static Version version();
};

} // namespace glpbinding
