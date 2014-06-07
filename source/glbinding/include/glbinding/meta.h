#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <vector>

#include <glbinding/types.h>

namespace gl 
{

enum class GLenum : unsigned int;
enum class Extension : int;

class GLBINDING_API  Meta
{
public:
    Meta() = delete;

    static const std::string & getString(gl::GLenum glenum);
    static gl::GLenum getEnum(const std::string & glenum);

    static const std::string & getString(Extension extension);
    static Extension getExtension(const std::string & extension);

    static const std::vector<std::string> & getRequiredFunctions(Extension extension);
    static const std::vector<Extension> & getExtensionsRequiring(const std::string & function);

    using ucharpair = std::pair<unsigned char, unsigned char>;
    static const ucharpair & getRequiringVersion(Extension extension);
    //static const ucharpair & getRemovingVersion(Extension extension);
};

} // namespace gl
