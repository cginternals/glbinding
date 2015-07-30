#pragma once

#include <glpbinding/glpbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <set>

#include <glpbinding/glp/types.h>


namespace glpbinding
{

class Version;


class GLPBINDING_API Meta
{
public:
    Meta() = delete;

    static bool stringsByGL();
    static bool glByStrings();

    static int glRevision();

    static const std::string & getString(glp::GLenum glenum);
    static glp::GLenum getEnum(const std::string & glenum);
    static std::vector<glp::GLenum> enums();

    static const std::string & getString(glp::GLboolean boolean);
    static glp::GLboolean getBoolean(const std::string & boolean);

    static const std::string & getString(glp::GLextension extension);
    static glp::GLextension getExtension(const std::string & extension);
    static std::set<glp::GLextension> extensions();

    static const std::set<std::string> & getRequiredFunctions(glp::GLextension extension);
    static const std::set<glp::GLextension> & getExtensionsRequiring(const std::string & function);

    static const Version & getRequiringVersion(glp::GLextension extension);
    static const std::set<Version> & versions();
};

} // namespace gl
