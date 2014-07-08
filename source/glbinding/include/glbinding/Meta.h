#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <set>

#include <glbinding/types.h>


namespace gl
{

class Version;


class GLBINDING_API Meta
{
public:
    Meta() = delete;

    static bool stringsByGL();
    static bool glByStrings();

    static int glRevision();

    static const std::string & getString(GLenum glenum);
    static GLenum getEnum(const std::string & glenum);
    static std::vector<GLenum> enums();

    static const std::string & getString(GLbitfield bitfield);
    static GLbitfield getBitfield(const std::string & bitfield);

    static const std::string & getString(GLboolean boolean);
    static GLboolean getBoolean(const std::string & boolean);

    static const std::string & getString(GLextension extension);
    static GLextension getExtension(const std::string & extension);
    static std::set<GLextension> extensions();

    static const std::set<std::string> & getRequiredFunctions(GLextension extension);
    static const std::set<GLextension> & getExtensionsRequiring(const std::string & function);

    static const Version & getRequiringVersion(GLextension extension);
    static const std::set<Version> & versions();
};

} // namespace gl
