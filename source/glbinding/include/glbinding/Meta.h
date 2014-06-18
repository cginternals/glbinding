#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>

#include <glbinding/types.h>

namespace gl
{

class GLBINDING_API Meta
{
public:
    Meta() = delete;

    static const std::string & getString(GLenum glenum);
    static GLenum getEnum(const std::string & glenum);

    static const std::string & getString(GLbitfield bitfield);
    static GLbitfield getBitfield(const std::string & bitfield);

    static const std::string & getString(GLbooelan boolean);
    static GLboolean getBoolean(const std::string & boolean);


    static const std::string & getString(GLextension extension);
    static GLextension getExtension(const std::string & extension);


    static const std::vector<std::string> & getRequiredFunctions(GLextension extension);
    static const std::vector<GLextension> & getExtensionsRequiring(const std::string & function);

    using ucharpair = std::pair<unsigned char, unsigned char>;
    static const Version & getRequiringVersion(GLextension extension);
};

} // namespace gl
