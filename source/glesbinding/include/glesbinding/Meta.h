#pragma once

#include <glesbinding/glesbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <set>

#include <glesbinding/gles/types.h>


namespace glesbinding
{

class Version;


class GLESBINDING_API Meta
{
public:
    Meta() = delete;

    static bool stringsByGL();
    static bool glByStrings();

    static int glRevision();

    static const std::string & getString(gles::GLenum glenum);
    static gles::GLenum getEnum(const std::string & glenum);
    static std::vector<gles::GLenum> enums();

    static const std::string & getString(gles::GLboolean boolean);
    static gles::GLboolean getBoolean(const std::string & boolean);

    static const std::string & getString(gles::GLextension extension);
    static gles::GLextension getExtension(const std::string & extension);
    static std::set<gles::GLextension> extensions();

    static const std::set<std::string> & getRequiredFunctions(gles::GLextension extension);
    static const std::set<gles::GLextension> & getExtensionsRequiring(const std::string & function);

    static const Version & getRequiringVersion(gles::GLextension extension);
    static const std::set<Version> & versions();
};

} // namespace gl
