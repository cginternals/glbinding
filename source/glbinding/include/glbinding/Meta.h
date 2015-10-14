#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>
#include <set>

#include <glbinding/gl/types.h>


namespace glbinding
{

class Version;


class GLBINDING_API Meta
{
public:
    Meta() = delete;

    static bool stringsByGL();
    static bool glByStrings();

    static int glRevision();

    // bitfields are grouped, hence no mapping from generic bitfield to string is possible
    // static const std::string & Meta::getString(const gl::GLbitfield glbitfield);
    static gl::GLbitfield Meta::getBitfield(const std::string & glbitfield);
    static std::vector<gl::GLbitfield> bitfields();

    static const std::string & getString(gl::GLenum glenum);
    static gl::GLenum getEnum(const std::string & glenum);
    static std::vector<gl::GLenum> enums();

    static const std::string & getString(gl::GLboolean boolean);
    static gl::GLboolean getBoolean(const std::string & boolean);

    static const std::string & getString(gl::GLextension extension);
    static gl::GLextension getExtension(const std::string & extension);
    static std::set<gl::GLextension> extensions();

    static const std::set<std::string> & getRequiredFunctions(gl::GLextension extension);
    static const std::set<gl::GLextension> & getExtensionsRequiring(const std::string & function);

    static const Version & getRequiringVersion(gl::GLextension extension);
    static const std::set<Version> & versions();

private:
    static const int alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};

} // namespace gl
